//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@protocol XRAnalysisCoreQueryHandler <NSObject>
- (void)reduceFromLocalResults:(NSArray *)arg1;
- (void)runWorkgroup:(unsigned short)arg1 of:(unsigned int)arg2 withLocalResults:(NSMutableDictionary *)arg3 core:(id <XRAnalysisCoreReadOnly>)arg4 registry:(id <XRAnalysisCoreRegistry>)arg5 rowIterator:(struct XRAnalysisCoreReadCursor *)arg6;
@end
