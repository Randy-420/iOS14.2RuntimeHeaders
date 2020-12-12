/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMReplyContextDeletedMessageChatItem : IMReplyContextTextMessagePartChatItem <IMReplyContext>

@property (nonatomic, readonly) bool replyIsFromMe;
@property (nonatomic, readonly, copy) NSString *replyMessageGUID;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (id)_initWithReplyItem:(id)arg1 threadIdentifier:(id)arg2 replyMessageGUID:(id)arg3 replyIsFromMe:(bool)arg4;
- (bool)isFromMe;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end