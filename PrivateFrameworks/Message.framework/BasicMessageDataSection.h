/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSData, NSString;

@interface BasicMessageDataSection : NSObject <MessageDataSection> {
    BOOL _complete;
    NSData *_data;
    NSString *_partName;
    BOOL _partial;
}

@property(retain) NSString *partName; /* unknown property attribute: V_partName */
@property(getter=isComplete) BOOL complete; /* unknown property attribute: V_complete */
@property(getter=isPartial) BOOL partial; /* unknown property attribute: V_partial */
@property(retain) NSData *data; /* unknown property attribute: V_data */

- (id)data;
- (void)dealloc;
- (BOOL)isComplete;
- (BOOL)isPartial;
- (id)partName;
- (void)setComplete:(BOOL)arg1;
- (void)setData:(id)arg1;
- (void)setPartName:(id)arg1;
- (void)setPartial:(BOOL)arg1;

@end
