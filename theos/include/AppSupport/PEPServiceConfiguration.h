/**
 * This header is generated by class-dump-z 0.1-11s.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PEPServiceConfiguration : NSObject {
	NSString* _cacheFilePath;
}
+(id)sharedInstance;
// inherited: -(id)init;
// inherited: -(void)dealloc;
-(void)_postNotification;
-(void)_updateDefaults:(id)defaults;
-(void)registerNetworkDefaultsForAppID:(id)appID;
@end

