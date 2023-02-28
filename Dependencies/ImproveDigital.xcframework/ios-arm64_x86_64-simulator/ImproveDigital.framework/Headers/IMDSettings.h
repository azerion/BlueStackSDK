//
//  IMDSettings.h
//  ImproveDigital
//

#import <Foundation/Foundation.h>

@interface IMDSettings : NSObject

@property (assign, nonatomic) BOOL withUserConsent;
@property (strong, nonatomic) NSString *gdprConsentString;
@property (assign, nonatomic) BOOL isCOPPACompliant;
@property (assign, nonatomic) BOOL isTestModeEnabled;
@property (assign, nonatomic) BOOL isDebugModeEnabled;

@end
