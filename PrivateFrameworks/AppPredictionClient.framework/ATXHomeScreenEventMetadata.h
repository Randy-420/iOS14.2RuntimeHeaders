/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXHomeScreenEventMetadata : NSObject <ATXProtoBufWrapper, NSSecureCoding> {
    NSNumber * _isSuggestionInAddWidgetSheet;
    NSNumber * _isWidgetInTodayView;
    NSNumber * _pageIndex;
    NSMutableArray * _stackIds;
    NSMutableArray * _widgets;
    NSArray * _widgetsInStack;
}

@property (nonatomic, retain) NSNumber *isSuggestionInAddWidgetSheet;
@property (nonatomic, retain) NSNumber *isWidgetInTodayView;
@property (nonatomic, retain) NSNumber *pageIndex;
@property (nonatomic, retain) NSDictionary *stacks;
@property (nonatomic, retain) NSArray *widgetsInStack;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)dictionaryRepresentation;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPageIndex:(id)arg1 stacks:(id)arg2 widgetsInStack:(id)arg3 isSuggestionInAddWidgetSheet:(id)arg4 isWidgetInTodayView:(id)arg5;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXHomeScreenEventMetadata:(id)arg1;
- (id)isSuggestionInAddWidgetSheet;
- (id)isWidgetInTodayView;
- (id)pageIndex;
- (id)proto;
- (void)setIsSuggestionInAddWidgetSheet:(id)arg1;
- (void)setIsWidgetInTodayView:(id)arg1;
- (void)setPageIndex:(id)arg1;
- (void)setStacks:(id)arg1;
- (void)setWidgetsInStack:(id)arg1;
- (id)stacks;
- (id)widgetsInStack;

@end
