//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCBuildPhaseDGSnapshot.h>

@class NSArray<DVTMacroExpansion>, NSString, NSString<DVTMacroExpansion>;

@interface XCShellScriptBuildPhaseDGSnapshot : XCBuildPhaseDGSnapshot
{
    NSString *_globalIdString;
    NSString<DVTMacroExpansion> *_shellPath;
    NSString *_shellScript;
    NSArray<DVTMacroExpansion> *_inputPaths;
    NSArray<DVTMacroExpansion> *_outputPaths;
    BOOL _emitEnvVars;
}

+ (id)defaultName;
+ (void)exportBuildSettingsToEnvironmentForNode:(id)arg1 withMacroExpansionScope:(id)arg2;
+ (id)environmentWithMacroExpansionScope:(id)arg1;
- (void).cxx_destruct;
- (id)globalIdString;
- (id)outputPaths;
- (id)inputPaths;
- (id)shellScript;
- (id)shellPath;
- (id)initWithInformationFromBuildPhase:(id)arg1 forTargetSnapshot:(id)arg2 withRefsToPathsMapping:(id)arg3;
- (void)computeDependenciesWithMacroExpansionScope:(id)arg1;

@end
