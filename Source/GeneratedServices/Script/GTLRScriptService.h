// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Apps Script Execution API (script/v1)
// Description:
//   Executes Google Apps Script projects.
// Documentation:
//   https://developers.google.com/apps-script/execution/rest/v1/scripts/run

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View and manage the provisioning of groups on your
 *  domain
 *
 *  Value "https://www.googleapis.com/auth/admin.directory.group"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeScriptAdminDirectoryGroup;
/**
 *  Authorization scope: View and manage the provisioning of users on your
 *  domain
 *
 *  Value "https://www.googleapis.com/auth/admin.directory.user"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeScriptAdminDirectoryUser;
/**
 *  Authorization scope: View and manage the files in your Google Drive
 *
 *  Value "https://www.googleapis.com/auth/drive"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeScriptDrive;
/**
 *  Authorization scope: Manage your calendars
 *
 *  Value "https://www.google.com/calendar/feeds"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeScriptFeeds;
/**
 *  Authorization scope: View and manage your forms in Google Drive
 *
 *  Value "https://www.googleapis.com/auth/forms"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeScriptForms;
/**
 *  Authorization scope: View and manage forms that this application has been
 *  installed in
 *
 *  Value "https://www.googleapis.com/auth/forms.currentonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeScriptFormsCurrentonly;
/**
 *  Authorization scope: View and manage your Google Groups
 *
 *  Value "https://www.googleapis.com/auth/groups"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeScriptGroups;
/**
 *  Authorization scope: Read, send, delete, and manage your email
 *
 *  Value "https://mail.google.com/"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeScriptMailGoogleCom;
/**
 *  Authorization scope: View and manage your spreadsheets in Google Drive
 *
 *  Value "https://www.googleapis.com/auth/spreadsheets"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeScriptSpreadsheets;
/**
 *  Authorization scope: View your email address
 *
 *  Value "https://www.googleapis.com/auth/userinfo.email"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeScriptUserinfoEmail;

// ----------------------------------------------------------------------------
//   GTLRScriptService
//

/**
 *  Service for executing Google Apps Script Execution API queries.
 *
 *  Executes Google Apps Script projects.
 */
@interface GTLRScriptService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRScriptQuery.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END
