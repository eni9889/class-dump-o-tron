//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFMessageTextAttachment.h"

@interface MFMessageTextAttachment (DisplayableTest)
- (_Bool)isDisplayableInline;
- (_Bool)isDisplayableInsidePlugin;
- (_Bool)isContentDownloadable;
- (_Bool)isContentOpenable;
- (_Bool)_isSinglePagePDFThatIsAllowedToBeInline;
- (id)mimeType;
- (id)unzippedContentType;
- (id)contentType;
- (id)_contentTypeByStrippingZipIfNeeded:(_Bool)arg1;
@end

