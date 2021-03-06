//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JaliscoImporter.h"

#import "HSMediaLibraryImportObserverDelegate.h"

@class HSMediaLibraryImportObserver, NSString;

@interface JaliscoMediaImporter : JaliscoImporter <HSMediaLibraryImportObserverDelegate>
{
    HSMediaLibraryImportObserver *_mediaLibraryImportObserver;
}

+ (void)cancelAllOperations;
- (void).cxx_destruct;
- (id)_importTracksFromItemsResponseData:(id)arg1;
- (id)_chapterArtworkURLsForData:(id)arg1 baseURL:(id)arg2;
- (id)_chapterDataFromURL:(id)arg1;
- (void)mediaLibraryImportObserver:(id)arg1 didReportError:(id)arg2;
- (void)mediaLibraryImportObserver:(id)arg1 didReportProgress:(float)arg2;
- (id)handleResponse:(id)arg1;
- (id)connection;
- (id)metadataKeys;
- (id)purchaseTokens;
- (id)queryFilter;
- (id)_queryFilterEncodedStringForDAAPNameString:(id)arg1;
- (unsigned int)onDiskRevision;
- (void)cancel;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

