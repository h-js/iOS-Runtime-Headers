/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString;

@interface MessageLibrary : NSObject {
    NSString *_path;
}

- (id)UIDsToDeleteInMailbox:(id)arg1;
- (NSUInteger)accessSequenceNumber;
- (id)accountForMessage:(id)arg1;
- (id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(BOOL)arg3 newMessagesByOldMessage:(id)arg4 remoteIDs:(id)arg5 setFlags:(unsigned long long)arg6 clearFlags:(unsigned long long)arg7 messageFlagsForMessages:(id)arg8 copyFiles:(BOOL)arg9 progressDelegate:(id)arg10 addPOPUIDs:(BOOL)arg11 dataSectionsByMessage:(id)arg12;
- (id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(BOOL)arg3 newMessagesByOldMessage:(id)arg4;
- (id)allUIDsInMailbox:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2;
- (id)bodyDataForMessage:(id)arg1;
- (void)cleanOldDatabases;
- (void)closeDatabaseConnections;
- (void)commit;
- (void)compactMailbox:(id)arg1;
- (void)compactMessages:(id)arg1 permanently:(BOOL)arg2;
- (void)compactMessages:(id)arg1;
- (id)dataConsumerForMessage:(id)arg1 isPartial:(BOOL)arg2;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2 incomplete:(BOOL)arg3;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2;
- (id)dataConsumerForMessage:(id)arg1;
- (id)dataForMimePart:(id)arg1 isComplete:(BOOL*)arg2;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (id)dataPathForMessage:(id)arg1;
- (void)dealloc;
- (void)deleteMailboxes:(id)arg1;
- (void)deletePOPUID:(id)arg1 inMailbox:(id)arg2;
- (NSUInteger)deletedCountForMailbox:(id)arg1;
- (id)deletedUIDsInMailbox:(id)arg1;
- (id)duplicateMessages:(id)arg1 newRemoteIDs:(id)arg2 forMailbox:(id)arg3 setFlags:(unsigned long long)arg4 clearFlags:(unsigned long long)arg5 messageFlagsForMessages:(id)arg6 createNewCacheFiles:(BOOL)arg7;
- (id)filterContiguousMessages:(id)arg1 forCriterion:(id)arg2 options:(NSUInteger)arg3;
- (void)flagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2;
- (id)fullBodyDataForMessage:(id)arg1;
- (id)getDetailsForAllMessagesFromMailbox:(id)arg1;
- (id)getDetailsForMessagesWithRemoteIDInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 fromMailbox:(id)arg2;
- (BOOL)hasCacheFileForMessage:(id)arg1 directoryContents:(id)arg2;
- (BOOL)hasCacheFileForMessage:(id)arg1 part:(id)arg2 directoryContents:(id)arg3;
- (id)hiddenPOPUIDsInMailbox:(id)arg1;
- (id)initWithPath:(id)arg1;
- (BOOL)isBusy;
- (BOOL)isMessageContentsLocallyAvailable:(id)arg1;
- (BOOL)libraryExists;
- (NSInteger)libraryStatus;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (void)lockDBForWriting;
- (id)mailboxUidForMessage:(id)arg1;
- (NSUInteger)maximumRemoteIDForMailbox:(id)arg1;
- (id)messageWithLibraryID:(NSUInteger)arg1 options:(NSUInteger)arg2;
- (id)messageWithLibraryID:(NSUInteger)arg1;
- (id)messageWithMessageID:(id)arg1 inMailbox:(id)arg2;
- (id)messageWithMessageID:(id)arg1;
- (id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2;
- (id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(NSInteger)arg2;
- (id)messagesMatchingCriterion:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (id)messagesMatchingCriterion:(id)arg1 options:(NSUInteger)arg2;
- (id)messagesWithMessageIDHeader:(id)arg1;
- (id)messagesWithSummariesForMailbox:(id)arg1 fromRowID:(NSUInteger)arg2 limit:(NSUInteger)arg3;
- (id)messagesWithSummariesForMailbox:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)messagesWithoutSummariesForMailbox:(id)arg1 fromRowID:(NSUInteger)arg2 limit:(NSUInteger)arg3;
- (id)messagesWithoutSummariesForMailbox:(id)arg1;
- (NSUInteger)minimumRemoteIDForMailbox:(id)arg1;
- (NSUInteger)nonDeletedCountForMailbox:(id)arg1;
- (id)oldestMessageInMailbox:(id)arg1;
- (BOOL)outstandingWritesExist;
- (void)postFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (void)postOldFlags:(unsigned long)arg1 newFlags:(unsigned long)arg2 forMessage:(id)arg3;
- (id)remoteStoreForMessage:(id)arg1;
- (void)removeAllMessagesFromMailbox:(id)arg1 removeMailbox:(BOOL)arg2 andNotify:(BOOL)arg3;
- (BOOL)renameMailboxes:(id)arg1 to:(id)arg2;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(NSUInteger)arg3 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg4;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(NSUInteger)arg3;
- (id)sequenceIdentifierForMailbox:(id)arg1;
- (void)setBusyTimeoutInterval:(double)arg1;
- (void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(BOOL)arg3;
- (void)setFlags:(unsigned long)arg1 forMessage:(id)arg2;
- (void)setFlagsForMessages:(id)arg1 mask:(unsigned long)arg2;
- (void)setFlagsForMessages:(id)arg1;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setMeetingData:(id)arg1 forMessage:(id)arg2;
- (void)setMeetingExternalID:(id)arg1 forMessage:(id)arg2;
- (void)setMessage:(id)arg1 isPartial:(BOOL)arg2;
- (void)setNumberOfAttachments:(NSUInteger)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (void)setSequenceIdentifier:(id)arg1 forMailbox:(id)arg2;
- (void)setSummary:(id)arg1 forMessage:(id)arg2;
- (void)setThreadPriority:(NSInteger)arg1;
- (BOOL)shouldCancel;
- (NSInteger)threadPriority;
- (NSUInteger)totalCountForMailbox:(id)arg1;
- (NSUInteger)unreadCountForMailbox:(id)arg1;
- (NSUInteger)updateSequenceNumber;
- (id)urlForMailboxID:(NSUInteger)arg1;

@end
