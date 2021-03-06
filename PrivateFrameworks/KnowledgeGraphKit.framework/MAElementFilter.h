/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
 */

@interface MAElementFilter : NSObject {
    unsigned short  _domain;
    NSString * _label;
    NSDictionary * _properties;
}

@property (nonatomic, readonly) unsigned short domain;
@property (nonatomic, readonly) NSArray *kgLabels;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) NSString *visualString;

+ (id)any;
+ (bool)scanElementFilterLabel:(out id*)arg1 domain:(out int*)arg2 properties:(out id*)arg3 withScanner:(id)arg4;
+ (id)scanFilterWithScanner:(id)arg1;
+ (bool)scanInstance:(out id*)arg1 withScanner:(id)arg2;
+ (bool)scanProperties:(out id*)arg1 withScanner:(id)arg2;
+ (bool)scanPropertyValue:(out id*)arg1 withScanner:(id)arg2;

- (void).cxx_destruct;
- (void)appendVisualStringToString:(id)arg1;
- (unsigned short)domain;
- (unsigned long long)hash;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)kgLabels;
- (id)label;
- (bool)matchesElement:(id)arg1;
- (id)properties;
- (id)visualString;

@end
