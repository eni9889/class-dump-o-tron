//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "__CalculatorModelAccessibility_super.h"

@class AXTimer;

@interface CalculatorModelAccessibility : __CalculatorModelAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryTargetClass;
+ (id)safeCategoryTargetClassName;
- (void)_setDisplayValue:(id)arg1 userEntered:(_Bool)arg2;
- (void)buttonPressed:(unsigned long long)arg1;
- (void)dealloc;
- (_Bool)_accessibilityShouldEchoDisplayValueAfterKeyPress:(unsigned long long)arg1;
@property(retain, nonatomic) AXTimer *speakResultTimer;

@end

