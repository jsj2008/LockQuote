/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import <Foundation/NSObject.h>


@interface VMURangeArray : NSObject {
	unsigned _count;
	VMURange* _ranges;
	unsigned _max;
}
// inherited: -(id)init;
-(id)initWithRanges:(const VMURange*)ranges count:(unsigned)count;
// inherited: -(void)dealloc;
-(void)setCapacity:(unsigned)capacity;
-(void)addRange:(VMURange)range;
-(void)addRanges:(id)ranges;
-(VMURange)rangeAtIndex:(unsigned)index;
-(VMURange)rangeForLocation:(unsigned long long)location;
-(void)insertRange:(VMURange)range atIndex:(unsigned)index;
-(void)removeRangeAtIndex:(unsigned)index;
-(void)removeAllRanges;
-(BOOL)intersectsLocation:(unsigned long long)location;
-(BOOL)intersectsRange:(VMURange)range;
-(VMURange)subrangeNotExcludedBySelfForRange:(VMURange)range;
-(VMURange)largestSubrangeNotExcludedBySelfForRange:(VMURange)range andLargerThan:(unsigned long long)than;
-(VMURange)range;
-(VMURange)largestRange;
-(unsigned long long)sumLengths;
-(VMURange*)ranges;
-(unsigned)count;
// inherited: -(id)description;
@end

