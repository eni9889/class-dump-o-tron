//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/PBXObject.h>

@class NSDate, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, PBXGroup, PBXGroupEnumerator, PBXHeaderFileEnumerator, XCRezSearchPathFileEnumerator;

@interface PBXContainer : PBXObject
{
    NSString *_path;
    NSString *_basePath;
    PBXGroup *_rootGroup;
    NSMutableDictionary *_perUserDict;
    NSString *_resolvedAbsolutePath;
    BOOL _invalidatingAbsolutePath;
    PBXGroupEnumerator *_enumerator;
    PBXHeaderFileEnumerator *_cachedHeaderFileEnumerator;
    XCRezSearchPathFileEnumerator *_cachedRezSearchPathFileEnumerator;
    NSMutableDictionary *_pathToRefCache;
    NSMutableDictionary *_fileNameToRefCache;
    NSDate *_modTime;
    NSMutableSet *_containedGlobalIDs;
    NSHashTable *_references;
}

+ (id)_cacheStats;
+ (void)removeContainerForResolvedAbsolutePath:(id)arg1;
+ (void)setContainer:(id)arg1 forResolvedAbsolutePath:(id)arg2;
+ (id)containerForResolvedAbsolutePath:(id)arg1;
- (void)removePerUserDictionaryObjectForKey:(id)arg1;
- (void)setPerUserDictionaryObject:(id)arg1 forKey:(id)arg2;
- (id)perUserDictionaryObjectForKey:(id)arg1;
- (void)_setPerUserDictionary:(id)arg1;
- (id)perUserDictionary;
- (id)innerLongDescriptionWithIndentLevel:(unsigned long long)arg1;
- (id)innerDescription;
- (void)printContainedItems;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)itemForGlobalIDHexString:(id)arg1;
- (id)itemForGlobalID:(id)arg1;
- (id)itemsOfFileType:(id)arg1;
- (id)fileReferenceForPartialPath:(id)arg1;
- (id)fileReferencesForPartialFileName:(id)arg1 ofTypes:(id)arg2 ignoringCase:(BOOL)arg3;
- (id)fileReferenceForFileName:(id)arg1;
- (id)fileReferenceForFileName:(id)arg1 ignoringCase:(BOOL)arg2;
- (id)fileReferenceForPath:(id)arg1;
- (id)allFileReferencesForFileName:(id)arg1;
- (void)uncacheFileReference:(id)arg1 atResolvedAbsolutePath:(id)arg2;
- (void)cacheFileReference:(id)arg1 atResolvedAbsolutePath:(id)arg2;
- (id)rezSearchPathFileEnumerator;
- (id)headerFileEnumerator;
- (id)groupEnumerator;
- (void)_clearGroupEnumerator;
- (id)rootGroup;
- (void)_setRootGroup:(id)arg1;
- (id)modTime;
- (id)resolvedAbsolutePath;
- (id)absolutePath;
- (id)name;
- (void)setPath:(id)arg1;
- (id)path;
- (BOOL)allowsEditingOfChildren;
- (BOOL)isReadOnly;
- (void)invalidateAbsolutePathCache;
- (void)validateChildren;
- (id)children;
- (void)removeReference:(id)arg1;
- (void)addReference:(id)arg1;
- (id)references;
- (void)dealloc;
- (id)init;
- (void)appendUserSettingsDictionariesTo:(id)arg1 defaultSettingsDictionariesTo:(id)arg2;
- (void)appendUserSettingsDictionariesTo:(id)arg1 defaultSettingsDictionariesTo:(id)arg2 forBuildConfigurationNamed:(id)arg3;
- (id)stringByMakingExpandedPathAbsolute:(id)arg1;
- (id)stringByExpandingString:(id)arg1;
- (id)stringByExpandingString:(id)arg1 forBuildConfigurationNamed:(id)arg2;
- (id)containerItemForBuildInfoEntityIdentifier:(id)arg1;
- (id)valueInFileReferencesWithUniqueID:(id)arg1;
- (id)valueInItemReferencesWithUniqueID:(id)arg1;
- (id)valueInGroupsWithUniqueID:(id)arg1;
- (id)itemsInArray:(id)arg1 withClass:(Class)arg2;
- (id)allFileReferences;
- (id)allGroups;
- (id)allReferences;
- (id)allItemsOfClass:(Class)arg1;
- (id)allItems;

@end

