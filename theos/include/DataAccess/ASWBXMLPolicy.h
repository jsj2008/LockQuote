/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASPolicy.h"

@class NSMutableDictionary;

@interface ASWBXMLPolicy : ASPolicy {
	NSMutableDictionary* _policyData;
}
// inherited: +(BOOL)acceptsTopLevelLeaves;
// inherited: +(BOOL)parsingLeafNode;
// inherited: +(BOOL)parsingWithSubItems;
// inherited: +(BOOL)frontingBasicTypes;
// inherited: -(void)dealloc;
-(void)_setPolicyData:(id)data;
// inherited: -(id)asParseRules;
-(void)_cleanUpPolicyData:(id)data;
// inherited: -(id)processedPolicyData;
@end

