/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGenericIntentResponse : PBCodable <NSCopying> {
    _INPBIntentMetadata * _metadata;
    NSMutableArray * _properties;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) BOOL hasMetadata;
@property (nonatomic, retain) _INPBIntentMetadata *metadata;
@property (nonatomic, retain) NSMutableArray *properties;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)options;
+ (Class)propertiesType;

- (void).cxx_destruct;
- (void)addProperties:(id)arg1;
- (void)clearProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMetadata;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (id)properties;
- (id)propertiesAtIndex:(unsigned int)arg1;
- (unsigned int)propertiesCount;
- (BOOL)readFrom:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end