//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTFoldingLayoutManagerDelegate.h"

@class DVTLayoutManager, NSColor;

@protocol DVTLayoutManagerDelegate <DVTFoldingLayoutManagerDelegate>

@optional
- (NSColor *)layoutManager:(DVTLayoutManager *)arg1 shouldUseTextBackgroundColor:(NSColor *)arg2 rectArray:(struct CGRect *)arg3 count:(unsigned long long)arg4 forCharacterRange:(struct _NSRange)arg5;
@end

