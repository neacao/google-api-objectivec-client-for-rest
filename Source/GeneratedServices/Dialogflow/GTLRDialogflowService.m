// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Dialogflow API (dialogflow/v2)
// Description:
//   An end-to-end development suite for conversational interfaces (e.g.,
//   chatbots, voice-powered apps and devices).
// Documentation:
//   https://cloud.google.com/dialogflow-enterprise/

#import "GTLRDialogflow.h"

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeDialogflowCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRDialogflowService
//

@implementation GTLRDialogflowService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://dialogflow.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint", @"pp" ];
  }
  return self;
}

@end
