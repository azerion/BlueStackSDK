//
//  Preference.h
//
//
//  Created by Ben Salah Med Amine on 12/9/14.
//  Edited by Hussein Dimessi
//  Copyright (c) 2014 All rights reserved.
//

/**
 *Preference class describe the preferences of ads
 */

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

typedef NS_ENUM(NSInteger, PreferredAdChoicePosition) {
    PreferredAdChoicePositionNone,
    PreferredAdChoicePositionTopRight,
    PreferredAdChoicePositionTopLeft,
    PreferredAdChoicePositionBottomLeft,
    PreferredAdChoicePositionBottomRight
};

typedef NS_ENUM(NSInteger, UserGender) {
    UserGenderUnknown,
    UserGenderMale,
    UserGenderFemale
};
typedef NS_ENUM(NSInteger, ThumbnailAdChoicePosition) {
    ThumbnailAdChoicePositionTopRight,
    ThumbnailAdChoicePositionTopLeft,
    ThumbnailAdChoicePositionBottomLeft,
    ThumbnailAdChoicePositionBottomRight
};

@interface Preference : NSObject

/**
 *Age of user
 */
@property NSInteger age;

/**
  Location of user
 
  @warning *Important:* your application can be rejected by Apple if you use the device's geo-location *only* for advertising.
        Your application needs to have a feature (other than advertising) using geolocation in order to be allowed to ask for the device's position.
 
 */
@property CLLocation *location;

/**
 *Language of user (ISO Code)
 */
@property NSString *language __attribute__((deprecated("Language of user (ISO Code) is useless")));;

/**
 *The user's gender may be used to deliver more relevant ads.
 */
@property UserGender gender;

/**
 * keyWord used for targeting.
 */
@property (copy, nonatomic)NSString *keyWord;
@property (copy, nonatomic)NSString *realKeyWord;

@property NSString *contentUrl;

@property NSDictionary * consent;

-(NSDictionary *)dictionaryValues;
-(CLLocation * )setLocationPreferences:(CLLocation *)location WithConsentFlag:(int)consentFlag;
+(BOOL) vendorIsEnabled:(NSNumber*)tagPublisher;
@property PreferredAdChoicePosition preferredAdChoicesPosition;
@property ThumbnailAdChoicePosition preferredThumbnailAdChoicePosition;
@property (nonatomic, assign) int consentFlag;

@end
