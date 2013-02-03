/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <RequestQueueResponseConsumer>, Message, DAMessageStore, MimePart;

@interface DAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <DAMailAccountRequest> {
    <RequestQueueResponseConsumer> *consumer;
    Message *message;
    MimePart *part;
    BOOL partial;
    DAMessageStore *store;
}

- (double)generationTime;
- (BOOL)shouldSend;

@end
