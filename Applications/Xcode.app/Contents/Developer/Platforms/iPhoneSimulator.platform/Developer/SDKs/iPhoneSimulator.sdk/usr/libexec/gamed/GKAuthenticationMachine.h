//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKStateMachine.h"

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class NSString;

@interface GKAuthenticationMachine : GKStateMachine <NSCoding, NSSecureCoding>
{
    int _credentialsModified;
    long long _loginCancelledCount;
    NSString *_accountName;
    NSString *_playerID;
    NSString *_authToken;
    long long _serverEnvironment;
}

+ (void)transferLegacyAccountInformation;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) int credentialsModified; // @synthesize credentialsModified=_credentialsModified;
@property(nonatomic) long long serverEnvironment; // @synthesize serverEnvironment=_serverEnvironment;
@property(retain, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(nonatomic) long long loginCancelledCount; // @synthesize loginCancelledCount=_loginCancelledCount;
- (void)searchForAccountsAddedBehindOurBack;
- (_Bool)isPlayerLoggedIn;
- (void)synchronize;
- (void)stateDidChange;
- (void)didEnterDisabled;
- (void)didEnterCancelled;
- (void)didEnterAuthorized;
- (_Bool)shouldEnterAuthenticated;
- (_Bool)hasPlayerCredentials;
- (void)didEnterCredentialsNeeded;
- (void)resetToInitialState;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)_commonInit;

@end

