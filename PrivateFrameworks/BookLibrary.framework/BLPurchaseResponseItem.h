/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

@interface BLPurchaseResponseItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _downloadID;
    bool  _isPurchaseRedownload;
    NSDictionary * _item;
    NSDictionary * _metadata;
    NSString * _purchaseParameters;
}

@property (nonatomic, copy) NSString *downloadID;
@property (nonatomic) bool isPurchaseRedownload;
@property (nonatomic, copy) NSDictionary *item;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, copy) NSString *purchaseParameters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)downloadID;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isPurchaseRedownload;
- (id)item;
- (id)metadata;
- (id)purchaseParameters;
- (void)setDownloadID:(id)arg1;
- (void)setIsPurchaseRedownload:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPurchaseParameters:(id)arg1;

@end