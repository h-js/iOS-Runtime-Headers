/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MessageUI.framework/MessageUI
 */

@class GenericAttachmentStore, OutgoingMessage, ComposeBodyField, OutgoingMessageDelivery, MailComposeView, MailCompositionContext, NSArray, ComposeSubjectView, NSString, MailboxUid, MFError, MutableMessageHeaders, ComposeRecipientView, NSTimer;

@interface MailComposeController : NSObject <MailComposeViewDelegate, DADSearchQueryConsumer> {
    struct CGSize { 
        float width; 
        float height; 
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    unsigned int _initialAttachmentCount : 10;
    unsigned int _showKeyboardImmediately : 1;
    unsigned int _isDirty : 1;
    unsigned int _shouldAutosaveWithSuspendInfo : 1;
    unsigned int _suspendedPickingTo : 1;
    unsigned int _suspendedPickingCC : 1;
    unsigned int _suspendedToWasSelected : 1;
    unsigned int _suspendedCCWasSelected : 1;
    unsigned int _suspendedBCCWasSelected : 1;
    unsigned int _suspendedSubjectWasSelected : 1;
    unsigned int _suspendedBodyWasSelected : 1;
    unsigned int _keyboardWasVisible : 1;
    unsigned int _pickerWasVisible : 1;
    unsigned int _allowDisabledFromAddress : 1;
    unsigned int _stillLoading : 1;
    GenericAttachmentStore *_attachmentStore;
    NSTimer *_autosaveTimer;
    NSArray *_bccAddresses;
    ComposeBodyField *_bodyField;
    NSArray *_ccAddresses;
    ComposeRecipientView *_ccField;
    MailCompositionContext *_compositionContext;
    id _content;
    id _delegate;
    OutgoingMessageDelivery *_delivery;
    MFError *_error;
    MailboxUid *_lastDraftMailboxUid;
    NSString *_lastDraftMessageID;
    OutgoingMessage *_message;
    NSString *_originalSendingEmailAddress;
    NSInteger _resolution;
    MutableMessageHeaders *_savedHeaders;
    } _selectedRange;
    NSString *_sendingEmailAddress;
    } _size;
    NSString *_subject;
    ComposeSubjectView *_subjectField;
    NSArray *_toAddresses;
    ComposeRecipientView *_toField;
    MailComposeView *_view;
}

+ (id)_autosavePath;
+ (id)_defaultAccount;
+ (void)_refreshMailAccountsIfNecessary;
+ (id)accountEmailAddresses;
+ (id)defaultSignature;
+ (id)dotMacUsernamesIncludingDisabled:(BOOL)arg1;
+ (BOOL)hasAutosavedMessage;
+ (void)initialize;
+ (BOOL)isSetupForDelivery;
+ (void)removeAutosavedMessage;
+ (id)signature;

- (void)_addSignature:(BOOL)arg1;
- (void)_addSignature;
- (id)_autosavedMessage;
- (void)_bodyFieldDidBeginEditing:(id)arg1;
- (void)_bodyTextChanged:(id)arg1;
- (void)_close;
- (void)_focusGained:(id)arg1;
- (BOOL)_fromAccountAllowsEmoji;
- (void)_inlinedAttachmentFinishedLoading:(id)arg1;
- (id)_lastDraftWithLibrary:(id)arg1;
- (void)_loadAttachments:(id)arg1;
- (void)_loadingContextDidLoad:(id)arg1;
- (void)_pickInitialFirstResponder;
- (void)_quoteBody:(id)arg1;
- (void)_quoteForwardedMessage:(id)arg1 content:(id)arg2;
- (void)_quoteReplyMessage:(id)arg1 content:(id)arg2;
- (void)_reallyAutosaveImmediately:(id)arg1;
- (void)_removeLastDraftWithStore:(id)arg1;
- (id)_sendingEmailAddressIfExists;
- (void)_setCodePointTranslationEnabled:(BOOL)arg1;
- (void)_setRecipients:(id)arg1 forField:(NSInteger)arg2;
- (void)_setUpDeliveryObject;
- (void)_setupForAutosavedMessage:(id)arg1;
- (void)_setupForDraft:(id)arg1;
- (void)_setupForExistingNewMessage:(id)arg1 headers:(id)arg2;
- (void)_setupForForwardOfMessage:(id)arg1;
- (void)_setupForMessageWithURL:(id)arg1;
- (void)_setupForReplyAllToMessage:(id)arg1;
- (void)_setupForReplyToMessage:(id)arg1;
- (BOOL)_shouldPrependBlankLineForAttachments;
- (void)_textChanged:(id)arg1;
- (void)_tryAddSenderToBccRecipients;
- (void)actionFailed:(NSInteger)arg1 forQuery:(id)arg2 error:(id)arg3;
- (void)addAddress:(id)arg1 field:(NSInteger)arg2;
- (void)addAttachment:(id)arg1;
- (void)addInlineAttachmentAtPath:(id)arg1 includeDirectoryContents:(BOOL)arg2;
- (void)addInlineAttachmentWithData:(id)arg1 preferredFilename:(id)arg2 mimeType:(id)arg3;
- (id)addressesForField:(NSInteger)arg1;
- (void)alertSheet:(id)arg1 buttonClicked:(NSInteger)arg2;
- (void)attachmentFinishedLoading:(id)arg1;
- (id)attachments;
- (void)attachmentsRemoved:(id)arg1;
- (void)autosaveImmediately;
- (id)bottomView;
- (BOOL)canShowFromField;
- (void)cancelAutosave;
- (void)cancelSearchQuery:(id)arg1;
- (void)close:(id)arg1;
- (void)composeHeaderViewDidChangeValue:(id)arg1;
- (void)composeHeaderViewDidConfirmValue:(id)arg1;
- (void)composeSubjectViewTextFieldDidResignFirstResponder:(id)arg1;
- (NSInteger)composeType;
- (void)dealloc;
- (BOOL)deliverMessage;
- (void)didSelectCellAtRow:(NSUInteger)arg1;
- (void)emptyContent;
- (id)error;
- (id)errorDescription;
- (id)errorTitle;
- (id)headersUseSuspendInfo:(BOOL)arg1;
- (id)init;
- (id)initForContentSize:(struct CGSize { float x1; float x2; })arg1 showKeyboardImmediately:(BOOL)arg2;
- (id)initForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)initializeUI;
- (void)insertInlineAttachment:(id)arg1;
- (void)markMessageAsForwarded:(id)arg1;
- (void)markMessageAsReplied:(id)arg1;
- (id)markupForInlineAttachment:(id)arg1 willBeIncluded:(BOOL)arg2;
- (id)message;
- (id)messageEndingEditing:(BOOL)arg1;
- (id)messageUseSuspendInfo:(BOOL)arg1 endingEditing:(BOOL)arg2;
- (id)messageUseSuspendInfo:(BOOL)arg1;
- (id)navigationBarTitle;
- (BOOL)needsDelivery;
- (NSInteger)numberOfComponentsInPickerView:(id)arg1;
- (NSUInteger)pickerView:(id)arg1 numberOfRowsInComponent:(NSUInteger)arg2;
- (id)pickerView:(id)arg1 viewForRow:(NSUInteger)arg2 forComponent:(NSUInteger)arg3 reusingView:(id)arg4;
- (void)prependPreamble:(id)arg1;
- (void)prependQuotedMarkup:(id)arg1;
- (void)recoverAutosavedMessage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfAttachment:(id)arg1;
- (void)removeAddressAtIndex:(NSInteger)arg1 field:(NSInteger)arg2;
- (NSInteger)resolution;
- (void)resultsForSearchQuery:(id)arg1 results:(id)arg2;
- (void)resume;
- (void)resumeWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)runDASearchIfNecessary:(id)arg1;
- (void)scheduleAutosaveAfterDelay:(id)arg1;
- (void)selectCurrentEntryForPickerView:(id)arg1;
- (void)send:(id)arg1;
- (void)sendMessage;
- (id)sendingEmailAddress;
- (BOOL)sendingEmailDirtied;
- (void)setAddresses:(id)arg1 field:(NSInteger)arg2;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setCompositionContext:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setContentVisible:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDraftMessageID:(id)arg1 mailbox:(id)arg2;
- (void)setFallbackDisabledDotMacUsername:(id)arg1;
- (void)setPercentDone:(double)arg1;
- (void)setQuotedContent:(id)arg1 includeAttachments:(BOOL)arg2;
- (void)setRecipientsKeyboardType:(NSInteger)arg1;
- (void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(BOOL)arg2;
- (void)setSendingEmailAddress:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (void)setupForURL:(id)arg1;
- (void)suspend;
- (void)tearDownUI;
- (id)topView;
- (id)view;

@end
