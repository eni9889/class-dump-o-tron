//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButtonCell.h"

@class NSString;

@interface ActivityButtonCell : NSButtonCell
{
    NSString *_glyphName;
}

- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setState:(long long)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)attributedTitle;
- (id)attributes;
- (id)fontBold;
- (id)font;
- (void)dealloc;
- (void)setGlyphName:(id)arg1;
- (BOOL)showsBorderOnlyWhileMouseInside;

@end

