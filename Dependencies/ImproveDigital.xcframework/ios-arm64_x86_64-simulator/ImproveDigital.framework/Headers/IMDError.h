//
//  IMDError.h
//  ImproveDigital
//

#import <Foundation/Foundation.h>

@interface IMDError : NSObject

@property (nonatomic, assign) int id;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *message;

-(id)initWithId:(int)_id name:(NSString*)_name message:(NSString*)_message;

-(NSDictionary*)toJSONObject;
-(NSString*)toJson;

+(IMDError*)NotInitialized;
+(IMDError*)ConnectionError;
+(IMDError*)NoFill;
+(IMDError*)NullContext;
+(IMDError*)NullPlacementId;
+(IMDError*)UnknownProvider;
+(IMDError*)InvalidResponse;
+(IMDError*)AssetDownload;
+(IMDError*)EmptyAdData;
+(IMDError*)PlayerError;
+(IMDError*)NotLoaded;
+(IMDError*)ViewDestroyed;
+(IMDError *)ResourceBundleNotFound;

@end
