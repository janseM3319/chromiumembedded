// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "include/cef_app.h"
#include "include/capi/cef_app_capi.h"
#include "include/cef_origin_whitelist.h"
#include "include/capi/cef_origin_whitelist_capi.h"
#include "include/cef_path_util.h"
#include "include/capi/cef_path_util_capi.h"
#include "include/cef_process_util.h"
#include "include/capi/cef_process_util_capi.h"
#include "include/cef_scheme.h"
#include "include/capi/cef_scheme_capi.h"
#include "include/cef_task.h"
#include "include/capi/cef_task_capi.h"
#include "include/cef_url.h"
#include "include/capi/cef_url_capi.h"
#include "include/cef_v8.h"
#include "include/capi/cef_v8_capi.h"
#include "include/cef_web_plugin.h"
#include "include/capi/cef_web_plugin_capi.h"
#include "libcef_dll/cpptoc/auth_callback_cpptoc.h"
#include "libcef_dll/cpptoc/before_download_callback_cpptoc.h"
#include "libcef_dll/cpptoc/binary_value_cpptoc.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/browser_host_cpptoc.h"
#include "libcef_dll/cpptoc/callback_cpptoc.h"
#include "libcef_dll/cpptoc/command_line_cpptoc.h"
#include "libcef_dll/cpptoc/context_menu_params_cpptoc.h"
#include "libcef_dll/cpptoc/cookie_manager_cpptoc.h"
#include "libcef_dll/cpptoc/domdocument_cpptoc.h"
#include "libcef_dll/cpptoc/domevent_cpptoc.h"
#include "libcef_dll/cpptoc/domnode_cpptoc.h"
#include "libcef_dll/cpptoc/dictionary_value_cpptoc.h"
#include "libcef_dll/cpptoc/download_item_cpptoc.h"
#include "libcef_dll/cpptoc/download_item_callback_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/cpptoc/geolocation_callback_cpptoc.h"
#include "libcef_dll/cpptoc/jsdialog_callback_cpptoc.h"
#include "libcef_dll/cpptoc/list_value_cpptoc.h"
#include "libcef_dll/cpptoc/menu_model_cpptoc.h"
#include "libcef_dll/cpptoc/process_message_cpptoc.h"
#include "libcef_dll/cpptoc/quota_callback_cpptoc.h"
#include "libcef_dll/cpptoc/scheme_registrar_cpptoc.h"
#include "libcef_dll/cpptoc/stream_reader_cpptoc.h"
#include "libcef_dll/cpptoc/stream_writer_cpptoc.h"
#include "libcef_dll/cpptoc/urlrequest_cpptoc.h"
#include "libcef_dll/cpptoc/v8context_cpptoc.h"
#include "libcef_dll/cpptoc/v8exception_cpptoc.h"
#include "libcef_dll/cpptoc/v8value_cpptoc.h"
#include "libcef_dll/cpptoc/web_plugin_info_cpptoc.h"
#include "libcef_dll/cpptoc/xml_reader_cpptoc.h"
#include "libcef_dll/cpptoc/zip_reader_cpptoc.h"
#include "libcef_dll/ctocpp/app_ctocpp.h"
#include "libcef_dll/ctocpp/browser_process_handler_ctocpp.h"
#include "libcef_dll/ctocpp/context_menu_handler_ctocpp.h"
#include "libcef_dll/ctocpp/cookie_visitor_ctocpp.h"
#include "libcef_dll/ctocpp/domevent_listener_ctocpp.h"
#include "libcef_dll/ctocpp/domvisitor_ctocpp.h"
#include "libcef_dll/ctocpp/display_handler_ctocpp.h"
#include "libcef_dll/ctocpp/download_handler_ctocpp.h"
#include "libcef_dll/ctocpp/focus_handler_ctocpp.h"
#include "libcef_dll/ctocpp/geolocation_handler_ctocpp.h"
#include "libcef_dll/ctocpp/jsdialog_handler_ctocpp.h"
#include "libcef_dll/ctocpp/keyboard_handler_ctocpp.h"
#include "libcef_dll/ctocpp/life_span_handler_ctocpp.h"
#include "libcef_dll/ctocpp/load_handler_ctocpp.h"
#include "libcef_dll/ctocpp/proxy_handler_ctocpp.h"
#include "libcef_dll/ctocpp/read_handler_ctocpp.h"
#include "libcef_dll/ctocpp/render_process_handler_ctocpp.h"
#include "libcef_dll/ctocpp/request_handler_ctocpp.h"
#include "libcef_dll/ctocpp/resource_bundle_handler_ctocpp.h"
#include "libcef_dll/ctocpp/resource_handler_ctocpp.h"
#include "libcef_dll/ctocpp/scheme_handler_factory_ctocpp.h"
#include "libcef_dll/ctocpp/string_visitor_ctocpp.h"
#include "libcef_dll/ctocpp/task_ctocpp.h"
#include "libcef_dll/ctocpp/urlrequest_client_ctocpp.h"
#include "libcef_dll/ctocpp/v8accessor_ctocpp.h"
#include "libcef_dll/ctocpp/v8handler_ctocpp.h"
#include "libcef_dll/ctocpp/web_plugin_info_visitor_ctocpp.h"
#include "libcef_dll/ctocpp/write_handler_ctocpp.h"


// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT int cef_execute_process(const struct _cef_main_args_t* args,
    struct _cef_app_t* application) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: args; type: struct_byref_const
  DCHECK(args);
  if (!args)
    return 0;
  // Unverified params: application

  // Translate param: args; type: struct_byref_const
  CefMainArgs argsObj;
  if (args)
    argsObj.Set(*args, false);

  // Execute
  int _retval = CefExecuteProcess(
      argsObj,
      CefAppCToCpp::Wrap(application));

  // Return type: simple
  return _retval;
}

CEF_EXPORT int cef_initialize(const struct _cef_main_args_t* args,
    const struct _cef_settings_t* settings, struct _cef_app_t* application) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: args; type: struct_byref_const
  DCHECK(args);
  if (!args)
    return 0;
  // Verify param: settings; type: struct_byref_const
  DCHECK(settings);
  if (!settings)
    return 0;
  // Unverified params: application

  // Translate param: args; type: struct_byref_const
  CefMainArgs argsObj;
  if (args)
    argsObj.Set(*args, false);
  // Translate param: settings; type: struct_byref_const
  CefSettings settingsObj;
  if (settings)
    settingsObj.Set(*settings, false);

  // Execute
  bool _retval = CefInitialize(
      argsObj,
      settingsObj,
      CefAppCToCpp::Wrap(application));

  // Return type: bool
  return _retval;
}

CEF_EXPORT void cef_shutdown() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefShutdown();

#ifndef NDEBUG
  // Check that all wrapper objects have been destroyed
  DCHECK_EQ(CefAuthCallbackCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefBeforeDownloadCallbackCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefBinaryValueCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefBrowserCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefBrowserHostCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefBrowserProcessHandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefCallbackCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefContextMenuHandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefContextMenuParamsCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefCookieManagerCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefCookieVisitorCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefDOMDocumentCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefDOMEventCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefDOMEventListenerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefDOMNodeCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefDOMVisitorCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefDictionaryValueCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefDisplayHandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefDownloadHandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefDownloadItemCallbackCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefDownloadItemCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefFocusHandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefFrameCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefGeolocationCallbackCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefGeolocationHandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefJSDialogCallbackCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefJSDialogHandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefKeyboardHandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefLifeSpanHandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefListValueCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefLoadHandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefMenuModelCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefProcessMessageCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefProxyHandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefQuotaCallbackCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefReadHandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefRenderProcessHandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefRequestHandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefResourceBundleHandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefResourceHandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefSchemeHandlerFactoryCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefSchemeRegistrarCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefStreamReaderCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefStreamWriterCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefStringVisitorCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefTaskCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefURLRequestClientCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefURLRequestCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefV8AccessorCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefV8ContextCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefV8ExceptionCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefV8HandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefV8ValueCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefWebPluginInfoCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefWebPluginInfoVisitorCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefWriteHandlerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefXmlReaderCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefZipReaderCppToC::DebugObjCt, 0);
#endif  // !NDEBUG
}

CEF_EXPORT void cef_do_message_loop_work() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefDoMessageLoopWork();
}

CEF_EXPORT void cef_run_message_loop() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRunMessageLoop();
}

CEF_EXPORT void cef_quit_message_loop() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefQuitMessageLoop();
}

CEF_EXPORT int cef_add_cross_origin_whitelist_entry(
    const cef_string_t* source_origin, const cef_string_t* target_protocol,
    const cef_string_t* target_domain, int allow_target_subdomains) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: source_origin; type: string_byref_const
  DCHECK(source_origin);
  if (!source_origin)
    return 0;
  // Verify param: target_protocol; type: string_byref_const
  DCHECK(target_protocol);
  if (!target_protocol)
    return 0;
  // Unverified params: target_domain

  // Execute
  bool _retval = CefAddCrossOriginWhitelistEntry(
      CefString(source_origin),
      CefString(target_protocol),
      CefString(target_domain),
      allow_target_subdomains?true:false);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_remove_cross_origin_whitelist_entry(
    const cef_string_t* source_origin, const cef_string_t* target_protocol,
    const cef_string_t* target_domain, int allow_target_subdomains) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: source_origin; type: string_byref_const
  DCHECK(source_origin);
  if (!source_origin)
    return 0;
  // Verify param: target_protocol; type: string_byref_const
  DCHECK(target_protocol);
  if (!target_protocol)
    return 0;
  // Unverified params: target_domain

  // Execute
  bool _retval = CefRemoveCrossOriginWhitelistEntry(
      CefString(source_origin),
      CefString(target_protocol),
      CefString(target_domain),
      allow_target_subdomains?true:false);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_clear_cross_origin_whitelist() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  bool _retval = CefClearCrossOriginWhitelist();

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_get_path(enum cef_path_key_t key, cef_string_t* path) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref
  DCHECK(path);
  if (!path)
    return 0;

  // Translate param: path; type: string_byref
  CefString pathStr(path);

  // Execute
  bool _retval = CefGetPath(
      key,
      pathStr);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_launch_process(struct _cef_command_line_t* command_line) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: command_line; type: refptr_same
  DCHECK(command_line);
  if (!command_line)
    return 0;

  // Execute
  bool _retval = CefLaunchProcess(
      CefCommandLineCppToC::Unwrap(command_line));

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_register_scheme_handler_factory(
    const cef_string_t* scheme_name, const cef_string_t* domain_name,
    struct _cef_scheme_handler_factory_t* factory) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: scheme_name; type: string_byref_const
  DCHECK(scheme_name);
  if (!scheme_name)
    return 0;
  // Unverified params: domain_name, factory

  // Execute
  bool _retval = CefRegisterSchemeHandlerFactory(
      CefString(scheme_name),
      CefString(domain_name),
      CefSchemeHandlerFactoryCToCpp::Wrap(factory));

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_clear_scheme_handler_factories() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  bool _retval = CefClearSchemeHandlerFactories();

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_currently_on(cef_thread_id_t threadId) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  bool _retval = CefCurrentlyOn(
      threadId);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_post_task(cef_thread_id_t threadId,
    struct _cef_task_t* task) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: task; type: refptr_diff
  DCHECK(task);
  if (!task)
    return 0;

  // Execute
  bool _retval = CefPostTask(
      threadId,
      CefTaskCToCpp::Wrap(task));

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_post_delayed_task(cef_thread_id_t threadId,
    struct _cef_task_t* task, int64 delay_ms) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: task; type: refptr_diff
  DCHECK(task);
  if (!task)
    return 0;

  // Execute
  bool _retval = CefPostDelayedTask(
      threadId,
      CefTaskCToCpp::Wrap(task),
      delay_ms);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_parse_url(const cef_string_t* url,
    struct _cef_urlparts_t* parts) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: url; type: string_byref_const
  DCHECK(url);
  if (!url)
    return 0;
  // Verify param: parts; type: struct_byref
  DCHECK(parts);
  if (!parts)
    return 0;

  // Translate param: parts; type: struct_byref
  CefURLParts partsObj;
  if (parts)
    partsObj.AttachTo(*parts);

  // Execute
  bool _retval = CefParseURL(
      CefString(url),
      partsObj);

  // Restore param: parts; type: struct_byref
  if (parts)
    partsObj.DetachTo(*parts);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_create_url(const struct _cef_urlparts_t* parts,
    cef_string_t* url) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: parts; type: struct_byref_const
  DCHECK(parts);
  if (!parts)
    return 0;
  // Verify param: url; type: string_byref
  DCHECK(url);
  if (!url)
    return 0;

  // Translate param: parts; type: struct_byref_const
  CefURLParts partsObj;
  if (parts)
    partsObj.Set(*parts, false);
  // Translate param: url; type: string_byref
  CefString urlStr(url);

  // Execute
  bool _retval = CefCreateURL(
      partsObj,
      urlStr);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_register_extension(const cef_string_t* extension_name,
    const cef_string_t* javascript_code, struct _cef_v8handler_t* handler) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: extension_name; type: string_byref_const
  DCHECK(extension_name);
  if (!extension_name)
    return 0;
  // Verify param: javascript_code; type: string_byref_const
  DCHECK(javascript_code);
  if (!javascript_code)
    return 0;
  // Unverified params: handler

  // Execute
  bool _retval = CefRegisterExtension(
      CefString(extension_name),
      CefString(javascript_code),
      CefV8HandlerCToCpp::Wrap(handler));

  // Return type: bool
  return _retval;
}

CEF_EXPORT void cef_visit_web_plugin_info(
    struct _cef_web_plugin_info_visitor_t* visitor) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: visitor; type: refptr_diff
  DCHECK(visitor);
  if (!visitor)
    return;

  // Execute
  CefVisitWebPluginInfo(
      CefWebPluginInfoVisitorCToCpp::Wrap(visitor));
}

