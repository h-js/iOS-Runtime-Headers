/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <DataConsumer>, MailMessageLibrary, LibraryMessage, NSData, MFError;

@interface DAMessageBodyFetchConsumer : NSObject <RequestQueueResponseConsumer, DAMailBodyFetchConsumer> {
    <DataConsumer> *_consumer;
    NSData *_data;
    MFError *_error;
    MailMessageLibrary *_library;
    LibraryMessage *_message;
    BOOL _succeeded;
}

@property(readonly) BOOL succeeded; /* unknown property attribute: V_succeeded */
@property(readonly) MFError *error; /* unknown property attribute: V_error */
@property(retain) NSData *data; /* unknown property attribute: V_data */
@property(readonly) <DataConsumer> *dataConsumer; /* unknown property attribute: V_consumer */

- (id)consumerForBodySubpart:(id)arg1;
- (id)data;
- (id)dataConsumer;
- (void)dealloc;
- (id)error;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (id)initForMessage:(id)arg1 inLibrary:(id)arg2 withConsumer:(id)arg3;
- (void)setData:(id)arg1;
- (BOOL)succeeded;
- (BOOL)wantsData;

@end
