//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKPlayerProfileCacheReader.h"

@interface GKPlayerProfileSelfCacheReader : GKPlayerProfileCacheReader
{
}

- (id)processAvailableResource:(id)arg1 retrievedWithStatement:(struct sqlite3_stmt *)arg2 fromDatabase:(struct sqlite3 *)arg3 statementStore:(id)arg4;
- (id)emailForPlayerEmailStatementResult:(struct sqlite3_stmt *)arg1;
- (void)bindParametersForEmailsStatement:(struct sqlite3_stmt *)arg1 playerRowID:(int)arg2;
- (id)playerEmailsSQLString;
- (double)photoPendingTTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;
- (double)friendRequestsTTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;
- (double)challengesTTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;
- (double)TTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;
- (int)rowIDForProfileStatementResult:(struct sqlite3_stmt *)arg1;
- (int)lastPlayedGameRowIDForProfileStatementResult:(struct sqlite3_stmt *)arg1;
- (int)availablePiecesForProfileStatementResult:(struct sqlite3_stmt *)arg1;
- (id)playerForProfileStatementResult:(struct sqlite3_stmt *)arg1;
- (void)bindParametersForProfileStatement:(struct sqlite3_stmt *)arg1 playerGCID:(id)arg2;
- (id)playerProfileSQLString;

@end

