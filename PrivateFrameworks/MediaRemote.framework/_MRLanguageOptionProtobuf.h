/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRLanguageOptionProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _characteristics;
    NSString * _displayName;
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _languageTag;
    int  _type;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
