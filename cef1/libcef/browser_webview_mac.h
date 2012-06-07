// Copyright (c) 2008 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CEF_LIBCEF_BROWSER_WEBVIEW_MAC_H_
#define CEF_LIBCEF_BROWSER_WEBVIEW_MAC_H_
#pragma once

#import <Cocoa/Cocoa.h>
#import "base/mac/cocoa_protocols.h"
#include "base/string16.h"
#include "base/memory/scoped_nsobject.h"
#include "third_party/WebKit/Source/WebKit/chromium/public/WebCompositionUnderline.h"
#include <Vector>

class CefBrowserImpl;
@class WebDragSource;
@class WebDropTarget;
struct WebDropData;

// A view to wrap the WebCore view and help it live in a Cocoa world. The
// (rough) equivalent of Apple's WebView.

@interface BrowserWebView : NSView<NSTextInputClient> {
 @private
  CefBrowserImpl* browser_;  // weak
  NSTrackingArea* trackingArea_;
  bool is_in_setfocus_;

  scoped_nsobject<WebDragSource> dragSource_;
  scoped_nsobject<WebDropTarget> dropTarget_;

  // Represents the input-method attributes supported by this object.
  scoped_nsobject<NSArray> validAttributesForMarkedText_;

  // Indicates if we are currently handling a key down event.
  BOOL handlingKeyDown_;

  // Indicates if there is any marked text.
  BOOL hasMarkedText_;

  // Indicates if unmarkText is called or not when handling a keyboard
  // event.
  BOOL unmarkTextCalled_;

  // The range of current marked text inside the whole content of the DOM node
  // being edited.
  // TODO(suzhe): This is currently a fake value, as we do not support accessing
  // the whole content yet.
  NSRange markedRange_;

  // The selected range, cached from a message sent by the renderer.
  NSRange selectedRange_;

  // Text to be inserted which was generated by handling a key down event.
  string16 textToBeInserted_;

  // Marked text which was generated by handling a key down event.
  string16 markedText_;
  
  // Underline information of the |markedText_|.
  std::vector<WebKit::WebCompositionUnderline> underlines_;
}

- (void)mouseDown:(NSEvent *)theEvent;
- (void)rightMouseDown:(NSEvent *)theEvent;
- (void)otherMouseDown:(NSEvent *)theEvent;
- (void)mouseUp:(NSEvent *)theEvent;
- (void)rightMouseUp:(NSEvent *)theEvent;
- (void)otherMouseUp:(NSEvent *)theEvent;
- (void)mouseMoved:(NSEvent *)theEvent;
- (void)mouseDragged:(NSEvent *)theEvent;
- (void)scrollWheel:(NSEvent *)theEvent;
- (void)rightMouseDragged:(NSEvent *)theEvent;
- (void)otherMouseDragged:(NSEvent *)theEvent;
- (void)mouseEntered:(NSEvent *)theEvent;
- (void)mouseExited:(NSEvent *)theEvent;
- (void)keyDown:(NSEvent *)theEvent;
- (void)keyUp:(NSEvent *)theEvent;
- (BOOL)isOpaque;
- (void)setFrame:(NSRect)frameRect;

// Register this WebView as a drag/drop target.
- (void)registerDragDrop;

// Called from BrowserWebViewDelegate::startDragging() to initiate dragging.
- (void)startDragWithDropData:(const WebDropData&)dropData
            dragOperationMask:(NSDragOperation)operationMask
                        image:(NSImage*)image
                       offset:(NSPoint)offset;

@property (nonatomic, assign) CefBrowserImpl* browser;
@property (nonatomic, assign) bool in_setfocus;

@end

#endif  // CEF_LIBCEF_BROWSER_WEBVIEW_MAC_H_
