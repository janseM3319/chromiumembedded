// Copyright (c) 2010 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// -------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//

#ifndef _FRAME_CTOCPP_H
#define _FRAME_CTOCPP_H

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else // USING_CEF_SHARED

#include "include/cef.h"
#include "include/cef_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefFrameCToCpp
    : public CefCToCpp<CefFrameCToCpp, CefFrame, cef_frame_t>
{
public:
  CefFrameCToCpp(cef_frame_t* str)
      : CefCToCpp<CefFrameCToCpp, CefFrame, cef_frame_t>(str) {}
  virtual ~CefFrameCToCpp() {}

  // CefFrame methods
  virtual void Undo();
  virtual void Redo();
  virtual void Cut();
  virtual void Copy();
  virtual void Paste();
  virtual void Delete();
  virtual void SelectAll();
  virtual void Print();
  virtual void ViewSource();
  virtual CefString GetSource();
  virtual CefString GetText();
  virtual void LoadRequest(CefRefPtr<CefRequest> request);
  virtual void LoadURL(const CefString& url);
  virtual void LoadString(const CefString& string, const CefString& url);
  virtual void LoadStream(CefRefPtr<CefStreamReader> stream,
      const CefString& url);
  virtual void ExecuteJavaScript(const CefString& jsCode,
      const CefString& scriptUrl, int startLine);
  virtual bool IsMain();
  virtual bool IsFocused();
  virtual CefString GetName();
  virtual CefString GetURL();
  virtual CefRefPtr<CefBrowser> GetBrowser();
};

#endif // USING_CEF_SHARED
#endif // _FRAME_CTOCPP_H

