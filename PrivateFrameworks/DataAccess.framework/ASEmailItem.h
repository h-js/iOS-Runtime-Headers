/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSDate, NSString, NSArray, ASMeetingRequest;

@interface ASEmailItem : ASChangedCollectionLeaf {
    NSArray *_attachments;
    NSString *_body;
    NSInteger _bodySize;
    BOOL _bodyTruncated;
    NSString *_cc;
    NSDate *_date;
    NSString *_displayTo;
    NSString *_folderId;
    NSString *_from;
    NSInteger _importance;
    ASMeetingRequest *_meetingRequest;
    NSString *_messageClass;
    NSString *_mimeData;
    BOOL _read;
    NSString *_replyTo;
    NSString *_subject;
    NSString *_threadTopic;
    NSString *_to;
}

- (BOOL)_isSyncingCalendars;
- (void)_processApplicationData:(BOOL)arg1;
- (void)_setMeetingRequest:(id)arg1;
- (id)asParseRules;
- (id)attachments;
- (id)body;
- (NSInteger)bodySize;
- (NSInteger)bodyTruncated;
- (id)cc;
- (NSInteger)compare:(id)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)displayTo;
- (id)folderId;
- (id)from;
- (NSInteger)importance;
- (id)initWithServerID:(id)arg1 from:(id)arg2 to:(id)arg3 body:(id)arg4 subject:(id)arg5 date:(id)arg6 isRead:(BOOL)arg7;
- (id)meetingRequestMetaData;
- (id)meetingRequestUUID;
- (id)messageClass;
- (id)mimeData;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5;
- (void)postProcessApplicationData;
- (void)processAppDataForStream;
- (BOOL)read;
- (id)replyTo;
- (void)setAttachments:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setBodySize:(NSInteger)arg1;
- (void)setBodyTruncated:(NSInteger)arg1;
- (void)setCc:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDisplayTo:(id)arg1;
- (void)setFolderId:(id)arg1;
- (void)setFrom:(id)arg1;
- (void)setImportance:(NSInteger)arg1;
- (void)setMessageClass:(id)arg1;
- (void)setMimeData:(id)arg1;
- (void)setRead:(BOOL)arg1;
- (void)setReplyTo:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setThreadTopic:(id)arg1;
- (void)setTo:(id)arg1;
- (id)subject;
- (id)threadTopic;
- (id)to;

@end
