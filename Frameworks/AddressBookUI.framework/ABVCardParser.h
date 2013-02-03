/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableDictionary, NSString, NSData, NSMutableArray, ABVCardLexer, NSMutableString, ABVCardValueSetter;

@interface ABVCardParser : NSObject {
    BOOL _30vCard;
    NSMutableArray *_addresses;
    NSMutableArray *_aims;
    BOOL _base64;
    NSData *_data;
    NSMutableArray *_dates;
    NSUInteger _defaultEncoding;
    NSMutableArray *_emails;
    NSUInteger _encoding;
    NSMutableDictionary *_extensions;
    NSString *_first;
    NSString *_formattedName;
    NSString *_grouping;
    BOOL _hasImportErrors;
    NSMutableArray *_icqs;
    NSData *_imageData;
    NSMutableArray *_itemParameters;
    NSMutableArray *_jabbers;
    NSString *_last;
    ABVCardLexer *_lexer;
    NSMutableArray *_msns;
    NSMutableString *_notes;
    NSString *_org;
    NSMutableString *_otherNotes;
    NSMutableArray *_phones;
    BOOL _quotedPrintable;
    NSMutableArray *_relatedNames;
    NSString *_uid;
    NSMutableArray *_urls;
    ABVCardValueSetter *_valueSetter;
    NSMutableArray *_yahoos;
}

+ (struct __CFArray { }*)supportedProperties;

- (void)_addIMHandles:(id)arg1 toService:(struct __CFString { }*)arg2 multiValue:(void*)arg3;
- (id)_genericLabel;
- (void)addAddressMultiValues;
- (BOOL)addIMValueTo:(id)arg1;
- (void)addInstantMessageMultiValues;
- (void)addMultiValues:(id)arg1 toProperty:(NSUInteger)arg2;
- (void)cleanUpCardState;
- (id)dateFromISO8601String:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)genericLabel;
- (BOOL)hasImportErrors;
- (BOOL)importToPerson:(void*)arg1 foundProperties:(const struct __CFArray {}**)arg2;
- (BOOL)importToValueSetter:(id)arg1;
- (id)initWithData:(id)arg1;
- (void*)nextPersonWithLength:(NSInteger*)arg1 foundProperties:(const struct __CFArray {}**)arg2;
- (BOOL)parseABDATE;
- (BOOL)parseABExtensionType:(id)arg1;
- (BOOL)parseABMaiden;
- (void)parseABOrder;
- (void)parseABPhoto;
- (BOOL)parseABReleatedNames;
- (void)parseABShowAs;
- (BOOL)parseABUID;
- (BOOL)parseADD;
- (BOOL)parseADR;
- (BOOL)parseBDAY;
- (BOOL)parseEMAIL;
- (BOOL)parseItem;
- (BOOL)parseN;
- (BOOL)parseNICKNAME;
- (BOOL)parseORG;
- (void)parsePhoto:(id)arg1;
- (id)parseSingleValue;
- (BOOL)parseTEL;
- (id)parseURL;
- (BOOL)parseVERSION;
- (struct __CFArray { }*)peopleAndProperties:(const struct __CFArray {}**)arg1;
- (id)phoneLabel;
- (id)sortedPeopleAndProperties:(const struct __CFArray {}**)arg1;

@end
