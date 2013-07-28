// iana_charset.h
// Generated automatically by parse_iana_charsets.pl Sun Jul 28 18:07:38 2013
// DO NOT EDIT!!!

#include "gb-include.h"
#include "iana_charset.h"
#include "HashTableX.h"
#include "hash.h"

typedef struct {
    char *name;
    char *mime;
    short mib_enum;
    char supported;
} IANACharset;

static IANACharset s_charsets[] = {
	{"ANSI_X3.4-1968", "csASCII", 3, 1},
	{"iso-ir-6", "csASCII", 3, 1},
	{"ANSI_X3.4-1986", "csASCII", 3, 1},
	{"ISO_646.irv:1991", "csASCII", 3, 1},
	{"ASCII", "csASCII", 3, 1},
	{"ISO646-US", "csASCII", 3, 1},
	{"US-ASCII", "csASCII", 3, 1},
	{"us", "csASCII", 3, 1},
	{"IBM367", "csASCII", 3, 1},
	{"cp367", "csASCII", 3, 1},
	{"csASCII", "csASCII", 3, 1},
	{"ISO_8859-1:1987", "csISOLatin1", 4, 1},
	{"iso-ir-100", "csISOLatin1", 4, 1},
	{"ISO_8859-1", "csISOLatin1", 4, 1},
	{"ISO-8859-1", "csISOLatin1", 4, 1},
	{"latin1", "csISOLatin1", 4, 1},
	{"l1", "csISOLatin1", 4, 1},
	{"IBM819", "csISOLatin1", 4, 1},
	{"CP819", "csISOLatin1", 4, 1},
	{"csISOLatin1", "csISOLatin1", 4, 1},
	{"ISO_8859-2:1987", "csISOLatin2", 5, 1},
	{"iso-ir-101", "csISOLatin2", 5, 1},
	{"ISO_8859-2", "csISOLatin2", 5, 1},
	{"ISO-8859-2", "csISOLatin2", 5, 1},
	{"latin2", "csISOLatin2", 5, 1},
	{"l2", "csISOLatin2", 5, 1},
	{"csISOLatin2", "csISOLatin2", 5, 1},
	{"ISO_8859-3:1988", "csISOLatin3", 6, 1},
	{"iso-ir-109", "csISOLatin3", 6, 1},
	{"ISO_8859-3", "csISOLatin3", 6, 1},
	{"ISO-8859-3", "csISOLatin3", 6, 1},
	{"latin3", "csISOLatin3", 6, 1},
	{"l3", "csISOLatin3", 6, 1},
	{"csISOLatin3", "csISOLatin3", 6, 1},
	{"ISO_8859-4:1988", "csISOLatin4", 7, 1},
	{"iso-ir-110", "csISOLatin4", 7, 1},
	{"ISO_8859-4", "csISOLatin4", 7, 1},
	{"ISO-8859-4", "csISOLatin4", 7, 1},
	{"latin4", "csISOLatin4", 7, 1},
	{"l4", "csISOLatin4", 7, 1},
	{"csISOLatin4", "csISOLatin4", 7, 1},
	{"ISO_8859-5:1988", "csISOLatinCyrillic", 8, 1},
	{"iso-ir-144", "csISOLatinCyrillic", 8, 1},
	{"ISO_8859-5", "csISOLatinCyrillic", 8, 1},
	{"ISO-8859-5", "csISOLatinCyrillic", 8, 1},
	{"cyrillic", "csISOLatinCyrillic", 8, 1},
	{"csISOLatinCyrillic", "csISOLatinCyrillic", 8, 1},
	{"ISO_8859-6:1987", "csISOLatinArabic", 9, 1},
	{"iso-ir-127", "csISOLatinArabic", 9, 1},
	{"ISO_8859-6", "csISOLatinArabic", 9, 1},
	{"ISO-8859-6", "csISOLatinArabic", 9, 1},
	{"ECMA-114", "csISOLatinArabic", 9, 1},
	{"ASMO-708", "csISOLatinArabic", 9, 1},
	{"arabic", "csISOLatinArabic", 9, 1},
	{"csISOLatinArabic", "csISOLatinArabic", 9, 1},
	{"ISO_8859-7:1987", "csISOLatinGreek", 10, 1},
	{"iso-ir-126", "csISOLatinGreek", 10, 1},
	{"ISO_8859-7", "csISOLatinGreek", 10, 1},
	{"ISO-8859-7", "csISOLatinGreek", 10, 1},
	{"ELOT_928", "csISOLatinGreek", 10, 1},
	{"ECMA-118", "csISOLatinGreek", 10, 1},
	{"greek", "csISOLatinGreek", 10, 1},
	{"greek8", "csISOLatinGreek", 10, 1},
	{"csISOLatinGreek", "csISOLatinGreek", 10, 1},
	{"ISO_8859-8:1988", "csISOLatinHebrew", 11, 1},
	{"iso-ir-138", "csISOLatinHebrew", 11, 1},
	{"ISO_8859-8", "csISOLatinHebrew", 11, 1},
	{"ISO-8859-8", "csISOLatinHebrew", 11, 1},
	{"hebrew", "csISOLatinHebrew", 11, 1},
	{"csISOLatinHebrew", "csISOLatinHebrew", 11, 1},
	{"ISO_8859-9:1989", "csISOLatin5", 12, 1},
	{"iso-ir-148", "csISOLatin5", 12, 1},
	{"ISO_8859-9", "csISOLatin5", 12, 1},
	{"ISO-8859-9", "csISOLatin5", 12, 1},
	{"latin5", "csISOLatin5", 12, 1},
	{"l5", "csISOLatin5", 12, 1},
	{"csISOLatin5", "csISOLatin5", 12, 1},
	{"ISO-8859-10", "ISO-8859-10", 13, 1},
	{"iso-ir-157", "ISO-8859-10", 13, 1},
	{"l6", "ISO-8859-10", 13, 1},
	{"ISO_8859-10:1992", "ISO-8859-10", 13, 1},
	{"csISOLatin6", "ISO-8859-10", 13, 1},
	{"latin6", "ISO-8859-10", 13, 1},
	{"ISO_6937-2-add", "ISO_6937-2-add", 14, 0},
	{"iso-ir-142", "ISO_6937-2-add", 14, 0},
	{"csISOTextComm", "ISO_6937-2-add", 14, 0},
	{"JIS_X0201", "JIS_X0201", 15, 1},
	{"X0201", "JIS_X0201", 15, 1},
	{"csHalfWidthKatakana", "JIS_X0201", 15, 1},
	{"JIS_Encoding", "JIS_Encoding", 16, 0},
	{"csJISEncoding", "JIS_Encoding", 16, 0},
	{"Shift_JIS", "Shift_JIS", 17, 1},
	{"MS_Kanji", "Shift_JIS", 17, 1},
	{"csShiftJIS", "Shift_JIS", 17, 1},
	{"x-sjis", "Shift_JIS", 17, 1},
	{"Extended_UNIX_Code_Packed_Format_for_Japanese", "EUC-JP", 18, 1},
	{"csEUCPkdFmtJapanese", "EUC-JP", 18, 1},
	{"EUC-JP", "EUC-JP", 18, 1},
	{"Extended_UNIX_Code_Fixed_Width_for_Japanese", "Extended_UNIX_Code_Fixed_Width_for_Japanese", 19, 0},
	{"csEUCFixWidJapanese", "Extended_UNIX_Code_Fixed_Width_for_Japanese", 19, 0},
	{"BS_4730", "BS_4730", 20, 0},
	{"iso-ir-4", "BS_4730", 20, 0},
	{"ISO646-GB", "BS_4730", 20, 0},
	{"gb", "BS_4730", 20, 0},
	{"uk", "BS_4730", 20, 0},
	{"csISO4UnitedKingdom", "BS_4730", 20, 0},
	{"SEN_850200_C", "SEN_850200_C", 21, 0},
	{"iso-ir-11", "SEN_850200_C", 21, 0},
	{"ISO646-SE2", "SEN_850200_C", 21, 0},
	{"se2", "SEN_850200_C", 21, 0},
	{"csISO11SwedishForNames", "SEN_850200_C", 21, 0},
	{"IT", "IT", 22, 0},
	{"iso-ir-15", "IT", 22, 0},
	{"ISO646-IT", "IT", 22, 0},
	{"csISO15Italian", "IT", 22, 0},
	{"ES", "ES", 23, 0},
	{"iso-ir-17", "ES", 23, 0},
	{"ISO646-ES", "ES", 23, 0},
	{"csISO17Spanish", "ES", 23, 0},
	{"DIN_66003", "DIN_66003", 24, 0},
	{"iso-ir-21", "DIN_66003", 24, 0},
	{"de", "DIN_66003", 24, 0},
	{"ISO646-DE", "DIN_66003", 24, 0},
	{"csISO21German", "DIN_66003", 24, 0},
	{"NS_4551-1", "NS_4551-1", 25, 0},
	{"iso-ir-60", "NS_4551-1", 25, 0},
	{"ISO646-NO", "NS_4551-1", 25, 0},
	{"no", "NS_4551-1", 25, 0},
	{"csISO60DanishNorwegian", "NS_4551-1", 25, 0},
	{"csISO60Norwegian1", "NS_4551-1", 25, 0},
	{"NF_Z_62-010", "NF_Z_62-010", 26, 0},
	{"iso-ir-69", "NF_Z_62-010", 26, 0},
	{"ISO646-FR", "NF_Z_62-010", 26, 0},
	{"fr", "NF_Z_62-010", 26, 0},
	{"csISO69French", "NF_Z_62-010", 26, 0},
	{"ISO-10646-UTF-1", "ISO-10646-UTF-1", 27, 0},
	{"csISO10646UTF1", "ISO-10646-UTF-1", 27, 0},
	{"ISO_646.basic:1983", "ISO_646.basic:1983", 28, 0},
	{"ref", "ISO_646.basic:1983", 28, 0},
	{"csISO646basic1983", "ISO_646.basic:1983", 28, 0},
	{"INVARIANT", "INVARIANT", 29, 0},
	{"csINVARIANT", "INVARIANT", 29, 0},
	{"ISO_646.irv:1983", "ISO_646.irv:1983", 30, 0},
	{"iso-ir-2", "ISO_646.irv:1983", 30, 0},
	{"irv", "ISO_646.irv:1983", 30, 0},
	{"csISO2IntlRefVersion", "ISO_646.irv:1983", 30, 0},
	{"NATS-SEFI", "NATS-SEFI", 31, 0},
	{"iso-ir-8-1", "NATS-SEFI", 31, 0},
	{"csNATSSEFI", "NATS-SEFI", 31, 0},
	{"NATS-SEFI-ADD", "NATS-SEFI-ADD", 32, 0},
	{"iso-ir-8-2", "NATS-SEFI-ADD", 32, 0},
	{"csNATSSEFIADD", "NATS-SEFI-ADD", 32, 0},
	{"NATS-DANO", "NATS-DANO", 33, 0},
	{"iso-ir-9-1", "NATS-DANO", 33, 0},
	{"csNATSDANO", "NATS-DANO", 33, 0},
	{"NATS-DANO-ADD", "NATS-DANO-ADD", 34, 0},
	{"iso-ir-9-2", "NATS-DANO-ADD", 34, 0},
	{"csNATSDANOADD", "NATS-DANO-ADD", 34, 0},
	{"SEN_850200_B", "SEN_850200_B", 35, 0},
	{"iso-ir-10", "SEN_850200_B", 35, 0},
	{"FI", "SEN_850200_B", 35, 0},
	{"ISO646-FI", "SEN_850200_B", 35, 0},
	{"ISO646-SE", "SEN_850200_B", 35, 0},
	{"se", "SEN_850200_B", 35, 0},
	{"csISO10Swedish", "SEN_850200_B", 35, 0},
	{"KS_C_5601-1987", "x-windows-949", 36, 1},
	{"iso-ir-149", "x-windows-949", 36, 1},
	{"KS_C_5601-1989", "x-windows-949", 36, 1},
	{"KSC_5601", "x-windows-949", 36, 1},
	{"korean", "x-windows-949", 36, 1},
	{"csKSC56011987", "x-windows-949", 36, 1},
	{"ISO-2022-KR", "ISO-2022-KR", 37, 1},
	{"csISO2022KR", "ISO-2022-KR", 37, 1},
	{"EUC-KR", "EUC-KR", 38, 1},
	{"csEUCKR", "EUC-KR", 38, 1},
	{"ISO-2022-JP", "ISO-2022-JP", 39, 1},
	{"csISO2022JP", "ISO-2022-JP", 39, 1},
	{"ISO-2022-JP-2", "ISO-2022-JP-2", 40, 1},
	{"csISO2022JP2", "ISO-2022-JP-2", 40, 1},
	{"JIS_C6220-1969-jp", "JIS_C6220-1969-jp", 41, 0},
	{"JIS_C6220-1969", "JIS_C6220-1969-jp", 41, 0},
	{"iso-ir-13", "JIS_C6220-1969-jp", 41, 0},
	{"katakana", "JIS_C6220-1969-jp", 41, 0},
	{"x0201-7", "JIS_C6220-1969-jp", 41, 0},
	{"csISO13JISC6220jp", "JIS_C6220-1969-jp", 41, 0},
	{"JIS_C6220-1969-ro", "JIS_C6220-1969-ro", 42, 1},
	{"iso-ir-14", "JIS_C6220-1969-ro", 42, 1},
	{"jp", "JIS_C6220-1969-ro", 42, 1},
	{"ISO646-JP", "JIS_C6220-1969-ro", 42, 1},
	{"csISO14JISC6220ro", "JIS_C6220-1969-ro", 42, 1},
	{"PT", "PT", 43, 0},
	{"iso-ir-16", "PT", 43, 0},
	{"ISO646-PT", "PT", 43, 0},
	{"csISO16Portuguese", "PT", 43, 0},
	{"greek7-old", "greek7-old", 44, 0},
	{"iso-ir-18", "greek7-old", 44, 0},
	{"csISO18Greek7Old", "greek7-old", 44, 0},
	{"latin-greek", "latin-greek", 45, 0},
	{"iso-ir-19", "latin-greek", 45, 0},
	{"csISO19LatinGreek", "latin-greek", 45, 0},
	{"NF_Z_62-010_(1973)", "NF_Z_62-010_(1973)", 46, 0},
	{"iso-ir-25", "NF_Z_62-010_(1973)", 46, 0},
	{"ISO646-FR1", "NF_Z_62-010_(1973)", 46, 0},
	{"csISO25French", "NF_Z_62-010_(1973)", 46, 0},
	{"Latin-greek-1", "Latin-greek-1", 47, 0},
	{"iso-ir-27", "Latin-greek-1", 47, 0},
	{"csISO27LatinGreek1", "Latin-greek-1", 47, 0},
	{"ISO_5427", "ISO_5427", 48, 0},
	{"iso-ir-37", "ISO_5427", 48, 0},
	{"csISO5427Cyrillic", "ISO_5427", 48, 0},
	{"JIS_C6226-1978", "JIS_C6226-1978", 49, 0},
	{"iso-ir-42", "JIS_C6226-1978", 49, 0},
	{"csISO42JISC62261978", "JIS_C6226-1978", 49, 0},
	{"BS_viewdata", "BS_viewdata", 50, 0},
	{"iso-ir-47", "BS_viewdata", 50, 0},
	{"csISO47BSViewdata", "BS_viewdata", 50, 0},
	{"INIS", "INIS", 51, 0},
	{"iso-ir-49", "INIS", 51, 0},
	{"csISO49INIS", "INIS", 51, 0},
	{"INIS-8", "INIS-8", 52, 0},
	{"iso-ir-50", "INIS-8", 52, 0},
	{"csISO50INIS8", "INIS-8", 52, 0},
	{"INIS-cyrillic", "INIS-cyrillic", 53, 0},
	{"iso-ir-51", "INIS-cyrillic", 53, 0},
	{"csISO51INISCyrillic", "INIS-cyrillic", 53, 0},
	{"ISO_5427:1981", "ISO_5427:1981", 54, 0},
	{"iso-ir-54", "ISO_5427:1981", 54, 0},
	{"ISO5427Cyrillic1981", "ISO_5427:1981", 54, 0},
	{"ISO_5428:1980", "ISO_5428:1980", 55, 0},
	{"iso-ir-55", "ISO_5428:1980", 55, 0},
	{"csISO5428Greek", "ISO_5428:1980", 55, 0},
	{"GB_1988-80", "GB_1988-80", 56, 1},
	{"iso-ir-57", "GB_1988-80", 56, 1},
	{"cn", "GB_1988-80", 56, 1},
	{"ISO646-CN", "GB_1988-80", 56, 1},
	{"csISO57GB1988", "GB_1988-80", 56, 1},
	{"GB_2312-80", "GB_2312-80", 57, 1},
	{"iso-ir-58", "GB_2312-80", 57, 1},
	{"chinese", "GB_2312-80", 57, 1},
	{"csISO58GB231280", "GB_2312-80", 57, 1},
	{"NS_4551-2", "NS_4551-2", 58, 0},
	{"ISO646-NO2", "NS_4551-2", 58, 0},
	{"iso-ir-61", "NS_4551-2", 58, 0},
	{"no2", "NS_4551-2", 58, 0},
	{"csISO61Norwegian2", "NS_4551-2", 58, 0},
	{"videotex-suppl", "videotex-suppl", 59, 0},
	{"iso-ir-70", "videotex-suppl", 59, 0},
	{"csISO70VideotexSupp1", "videotex-suppl", 59, 0},
	{"PT2", "PT2", 60, 0},
	{"iso-ir-84", "PT2", 60, 0},
	{"ISO646-PT2", "PT2", 60, 0},
	{"csISO84Portuguese2", "PT2", 60, 0},
	{"ES2", "ES2", 61, 0},
	{"iso-ir-85", "ES2", 61, 0},
	{"ISO646-ES2", "ES2", 61, 0},
	{"csISO85Spanish2", "ES2", 61, 0},
	{"MSZ_7795.3", "MSZ_7795.3", 62, 0},
	{"iso-ir-86", "MSZ_7795.3", 62, 0},
	{"ISO646-HU", "MSZ_7795.3", 62, 0},
	{"hu", "MSZ_7795.3", 62, 0},
	{"csISO86Hungarian", "MSZ_7795.3", 62, 0},
	{"JIS_C6226-1983", "JIS_C6226-1983", 63, 1},
	{"iso-ir-87", "JIS_C6226-1983", 63, 1},
	{"x0208", "JIS_C6226-1983", 63, 1},
	{"JIS_X0208-1983", "JIS_C6226-1983", 63, 1},
	{"csISO87JISX0208", "JIS_C6226-1983", 63, 1},
	{"greek7", "greek7", 64, 0},
	{"iso-ir-88", "greek7", 64, 0},
	{"csISO88Greek7", "greek7", 64, 0},
	{"ASMO_449", "ASMO_449", 65, 0},
	{"ISO_9036", "ASMO_449", 65, 0},
	{"arabic7", "ASMO_449", 65, 0},
	{"iso-ir-89", "ASMO_449", 65, 0},
	{"csISO89ASMO449", "ASMO_449", 65, 0},
	{"iso-ir-90", "iso-ir-90", 66, 0},
	{"csISO90", "iso-ir-90", 66, 0},
	{"JIS_C6229-1984-a", "JIS_C6229-1984-a", 67, 0},
	{"iso-ir-91", "JIS_C6229-1984-a", 67, 0},
	{"jp-ocr-a", "JIS_C6229-1984-a", 67, 0},
	{"csISO91JISC62291984a", "JIS_C6229-1984-a", 67, 0},
	{"JIS_C6229-1984-b", "JIS_C6229-1984-b", 68, 0},
	{"iso-ir-92", "JIS_C6229-1984-b", 68, 0},
	{"ISO646-JP-OCR-B", "JIS_C6229-1984-b", 68, 0},
	{"jp-ocr-b", "JIS_C6229-1984-b", 68, 0},
	{"csISO92JISC62991984b", "JIS_C6229-1984-b", 68, 0},
	{"JIS_C6229-1984-b-add", "JIS_C6229-1984-b-add", 69, 0},
	{"iso-ir-93", "JIS_C6229-1984-b-add", 69, 0},
	{"jp-ocr-b-add", "JIS_C6229-1984-b-add", 69, 0},
	{"csISO93JIS62291984badd", "JIS_C6229-1984-b-add", 69, 0},
	{"JIS_C6229-1984-hand", "JIS_C6229-1984-hand", 70, 0},
	{"iso-ir-94", "JIS_C6229-1984-hand", 70, 0},
	{"jp-ocr-hand", "JIS_C6229-1984-hand", 70, 0},
	{"csISO94JIS62291984hand", "JIS_C6229-1984-hand", 70, 0},
	{"JIS_C6229-1984-hand-add", "JIS_C6229-1984-hand-add", 71, 0},
	{"iso-ir-95", "JIS_C6229-1984-hand-add", 71, 0},
	{"jp-ocr-hand-add", "JIS_C6229-1984-hand-add", 71, 0},
	{"csISO95JIS62291984handadd", "JIS_C6229-1984-hand-add", 71, 0},
	{"JIS_C6229-1984-kana", "JIS_C6229-1984-kana", 72, 0},
	{"iso-ir-96", "JIS_C6229-1984-kana", 72, 0},
	{"csISO96JISC62291984kana", "JIS_C6229-1984-kana", 72, 0},
	{"ISO_2033-1983", "ISO_2033-1983", 73, 0},
	{"iso-ir-98", "ISO_2033-1983", 73, 0},
	{"e13b", "ISO_2033-1983", 73, 0},
	{"csISO2033", "ISO_2033-1983", 73, 0},
	{"ANSI_X3.110-1983", "ANSI_X3.110-1983", 74, 0},
	{"iso-ir-99", "ANSI_X3.110-1983", 74, 0},
	{"CSA_T500-1983", "ANSI_X3.110-1983", 74, 0},
	{"NAPLPS", "ANSI_X3.110-1983", 74, 0},
	{"csISO99NAPLPS", "ANSI_X3.110-1983", 74, 0},
	{"T.61-7bit", "T.61-7bit", 75, 0},
	{"iso-ir-102", "T.61-7bit", 75, 0},
	{"csISO102T617bit", "T.61-7bit", 75, 0},
	{"T.61-8bit", "T.61-8bit", 76, 0},
	{"T.61", "T.61-8bit", 76, 0},
	{"iso-ir-103", "T.61-8bit", 76, 0},
	{"csISO103T618bit", "T.61-8bit", 76, 0},
	{"ECMA-cyrillic", "ECMA-cyrillic", 77, 0},
	{"iso-ir-111", "ECMA-cyrillic", 77, 0},
	{"KOI8-E", "ECMA-cyrillic", 77, 0},
	{"csISO111ECMACyrillic", "ECMA-cyrillic", 77, 0},
	{"CSA_Z243.4-1985-1", "CSA_Z243.4-1985-1", 78, 0},
	{"iso-ir-121", "CSA_Z243.4-1985-1", 78, 0},
	{"ISO646-CA", "CSA_Z243.4-1985-1", 78, 0},
	{"csa7-1", "CSA_Z243.4-1985-1", 78, 0},
	{"ca", "CSA_Z243.4-1985-1", 78, 0},
	{"csISO121Canadian1", "CSA_Z243.4-1985-1", 78, 0},
	{"CSA_Z243.4-1985-2", "CSA_Z243.4-1985-2", 79, 0},
	{"iso-ir-122", "CSA_Z243.4-1985-2", 79, 0},
	{"ISO646-CA2", "CSA_Z243.4-1985-2", 79, 0},
	{"csa7-2", "CSA_Z243.4-1985-2", 79, 0},
	{"csISO122Canadian2", "CSA_Z243.4-1985-2", 79, 0},
	{"CSA_Z243.4-1985-gr", "CSA_Z243.4-1985-gr", 80, 0},
	{"iso-ir-123", "CSA_Z243.4-1985-gr", 80, 0},
	{"csISO123CSAZ24341985gr", "CSA_Z243.4-1985-gr", 80, 0},
	{"ISO_8859-6-E", "ISO-8859-6-E", 81, 0},
	{"csISO88596E", "ISO-8859-6-E", 81, 0},
	{"ISO-8859-6-E", "ISO-8859-6-E", 81, 0},
	{"ISO_8859-6-I", "ISO-8859-6-I", 82, 0},
	{"csISO88596I", "ISO-8859-6-I", 82, 0},
	{"ISO-8859-6-I", "ISO-8859-6-I", 82, 0},
	{"T.101-G2", "T.101-G2", 83, 0},
	{"iso-ir-128", "T.101-G2", 83, 0},
	{"csISO128T101G2", "T.101-G2", 83, 0},
	{"ISO_8859-8-E", "ISO-8859-8-E", 84, 0},
	{"csISO88598E", "ISO-8859-8-E", 84, 0},
	{"ISO-8859-8-E", "ISO-8859-8-E", 84, 0},
	{"ISO_8859-8-I", "ISO-8859-8-I", 85, 0},
	{"csISO88598I", "ISO-8859-8-I", 85, 0},
	{"ISO-8859-8-I", "ISO-8859-8-I", 85, 0},
	{"CSN_369103", "CSN_369103", 86, 0},
	{"iso-ir-139", "CSN_369103", 86, 0},
	{"csISO139CSN369103", "CSN_369103", 86, 0},
	{"JUS_I.B1.002", "JUS_I.B1.002", 87, 0},
	{"iso-ir-141", "JUS_I.B1.002", 87, 0},
	{"ISO646-YU", "JUS_I.B1.002", 87, 0},
	{"js", "JUS_I.B1.002", 87, 0},
	{"yu", "JUS_I.B1.002", 87, 0},
	{"csISO141JUSIB1002", "JUS_I.B1.002", 87, 0},
	{"IEC_P27-1", "IEC_P27-1", 88, 0},
	{"iso-ir-143", "IEC_P27-1", 88, 0},
	{"csISO143IECP271", "IEC_P27-1", 88, 0},
	{"JUS_I.B1.003-serb", "JUS_I.B1.003-serb", 89, 0},
	{"iso-ir-146", "JUS_I.B1.003-serb", 89, 0},
	{"serbian", "JUS_I.B1.003-serb", 89, 0},
	{"csISO146Serbian", "JUS_I.B1.003-serb", 89, 0},
	{"JUS_I.B1.003-mac", "JUS_I.B1.003-mac", 90, 0},
	{"macedonian", "JUS_I.B1.003-mac", 90, 0},
	{"iso-ir-147", "JUS_I.B1.003-mac", 90, 0},
	{"csISO147Macedonian", "JUS_I.B1.003-mac", 90, 0},
	{"greek-ccitt", "greek-ccitt", 91, 0},
	{"iso-ir-150", "greek-ccitt", 91, 0},
	{"csISO150", "greek-ccitt", 91, 0},
	{"csISO150GreekCCITT", "greek-ccitt", 91, 0},
	{"NC_NC00-10:81", "NC_NC00-10:81", 92, 0},
	{"cuba", "NC_NC00-10:81", 92, 0},
	{"iso-ir-151", "NC_NC00-10:81", 92, 0},
	{"ISO646-CU", "NC_NC00-10:81", 92, 0},
	{"csISO151Cuba", "NC_NC00-10:81", 92, 0},
	{"ISO_6937-2-25", "ISO_6937-2-25", 93, 0},
	{"iso-ir-152", "ISO_6937-2-25", 93, 0},
	{"csISO6937Add", "ISO_6937-2-25", 93, 0},
	{"GOST_19768-74", "GOST_19768-74", 94, 0},
	{"ST_SEV_358-88", "GOST_19768-74", 94, 0},
	{"iso-ir-153", "GOST_19768-74", 94, 0},
	{"csISO153GOST1976874", "GOST_19768-74", 94, 0},
	{"ISO_8859-supp", "ISO_8859-supp", 95, 0},
	{"iso-ir-154", "ISO_8859-supp", 95, 0},
	{"latin1-2-5", "ISO_8859-supp", 95, 0},
	{"csISO8859Supp", "ISO_8859-supp", 95, 0},
	{"ISO_10367-box", "ISO_10367-box", 96, 0},
	{"iso-ir-155", "ISO_10367-box", 96, 0},
	{"csISO10367Box", "ISO_10367-box", 96, 0},
	{"latin-lap", "latin-lap", 97, 0},
	{"lap", "latin-lap", 97, 0},
	{"iso-ir-158", "latin-lap", 97, 0},
	{"csISO158Lap", "latin-lap", 97, 0},
	{"JIS_X0212-1990", "JIS_X0212-1990", 98, 1},
	{"x0212", "JIS_X0212-1990", 98, 1},
	{"iso-ir-159", "JIS_X0212-1990", 98, 1},
	{"csISO159JISX02121990", "JIS_X0212-1990", 98, 1},
	{"DS_2089", "DS_2089", 99, 0},
	{"DS2089", "DS_2089", 99, 0},
	{"ISO646-DK", "DS_2089", 99, 0},
	{"dk", "DS_2089", 99, 0},
	{"csISO646Danish", "DS_2089", 99, 0},
	{"us-dk", "us-dk", 100, 0},
	{"csUSDK", "us-dk", 100, 0},
	{"dk-us", "dk-us", 101, 0},
	{"csDKUS", "dk-us", 101, 0},
	{"KSC5636", "KSC5636", 102, 0},
	{"ISO646-KR", "KSC5636", 102, 0},
	{"csKSC5636", "KSC5636", 102, 0},
	{"UNICODE-1-1-UTF-7", "UNICODE-1-1-UTF-7", 103, 1},
	{"csUnicode11UTF7", "UNICODE-1-1-UTF-7", 103, 1},
	{"ISO-2022-CN", "ISO-2022-CN", 104, 1},
	{"ISO-2022-CN-EXT", "ISO-2022-CN-EXT", 105, 1},
	{"UTF-8", "UTF-8", 106, 1},
	{"ISO-8859-13", "ISO-8859-13", 109, 1},
	{"ISO-8859-14", "ISO-8859-14", 110, 1},
	{"iso-ir-199", "ISO-8859-14", 110, 1},
	{"ISO_8859-14:1998", "ISO-8859-14", 110, 1},
	{"ISO_8859-14", "ISO-8859-14", 110, 1},
	{"latin8", "ISO-8859-14", 110, 1},
	{"iso-celtic", "ISO-8859-14", 110, 1},
	{"l8", "ISO-8859-14", 110, 1},
	{"ISO-8859-15", "ISO-8859-15", 111, 1},
	{"ISO_8859-15", "ISO-8859-15", 111, 1},
	{"Latin-9", "ISO-8859-15", 111, 1},
	{"ISO-8859-16", "ISO-8859-16", 112, 1},
	{"iso-ir-226", "ISO-8859-16", 112, 1},
	{"ISO_8859-16:2001", "ISO-8859-16", 112, 1},
	{"ISO_8859-16", "ISO-8859-16", 112, 1},
	{"latin10", "ISO-8859-16", 112, 1},
	{"l10", "ISO-8859-16", 112, 1},
	{"GBK", "GBK", 113, 1},
	{"CP936", "GBK", 113, 1},
	{"MS936", "GBK", 113, 1},
	{"windows-936", "GBK", 113, 1},
	{"GB18030", "GB18030", 114, 1},
	{"OSD_EBCDIC_DF04_15", "OSD_EBCDIC_DF04_15", 115, 0},
	{"OSD_EBCDIC_DF03_IRV", "OSD_EBCDIC_DF03_IRV", 116, 0},
	{"OSD_EBCDIC_DF04_1", "OSD_EBCDIC_DF04_1", 117, 0},
	{"ISO-10646-UCS-2", "ISO-10646-UCS-2", 1000, 1},
	{"csUnicode", "ISO-10646-UCS-2", 1000, 1},
	{"ISO-10646-UCS-4", "ISO-10646-UCS-4", 1001, 1},
	{"csUCS4", "ISO-10646-UCS-4", 1001, 1},
	{"ISO-10646-UCS-Basic", "ISO-10646-UCS-Basic", 1002, 0},
	{"csUnicodeASCII", "ISO-10646-UCS-Basic", 1002, 0},
	{"ISO-10646-Unicode-Latin1", "ISO-10646-Unicode-Latin1", 1003, 0},
	{"csUnicodeLatin1", "ISO-10646-Unicode-Latin1", 1003, 0},
	{"ISO-10646", "ISO-10646-Unicode-Latin1", 1003, 0},
	{"ISO-Unicode-IBM-1261", "ISO-Unicode-IBM-1261", 1005, 0},
	{"csUnicodeIBM1261", "ISO-Unicode-IBM-1261", 1005, 0},
	{"ISO-Unicode-IBM-1268", "ISO-Unicode-IBM-1268", 1006, 0},
	{"csUnicodeIBM1268", "ISO-Unicode-IBM-1268", 1006, 0},
	{"ISO-Unicode-IBM-1276", "ISO-Unicode-IBM-1276", 1007, 0},
	{"csUnicodeIBM1276", "ISO-Unicode-IBM-1276", 1007, 0},
	{"ISO-Unicode-IBM-1264", "ISO-Unicode-IBM-1264", 1008, 0},
	{"csUnicodeIBM1264", "ISO-Unicode-IBM-1264", 1008, 0},
	{"ISO-Unicode-IBM-1265", "ISO-Unicode-IBM-1265", 1009, 0},
	{"csUnicodeIBM1265", "ISO-Unicode-IBM-1265", 1009, 0},
	{"UNICODE-1-1", "UNICODE-1-1", 1010, 1},
	{"csUnicode11", "UNICODE-1-1", 1010, 1},
	{"SCSU", "SCSU", 1011, 0},
	{"UTF-7", "UTF-7", 1012, 1},
	{"UTF-16BE", "UTF-16BE", 1013, 1},
	{"UTF-16LE", "UTF-16LE", 1014, 1},
	{"UTF-16", "UTF-16", 1015, 1},
	{"CESU-8", "CESU-8", 1016, 0},
	{"csCESU-8", "CESU-8", 1016, 0},
	{"UTF-32", "UTF-32", 1017, 1},
	{"UTF-32BE", "UTF-32BE", 1018, 1},
	{"UTF-32LE", "UTF-32LE", 1019, 1},
	{"BOCU-1", "BOCU-1", 1020, 0},
	{"csBOCU-1", "BOCU-1", 1020, 0},
	{"ISO-8859-1-Windows-3.0-Latin-1", "ISO-8859-1-Windows-3.0-Latin-1", 2000, 0},
	{"csWindows30Latin1", "ISO-8859-1-Windows-3.0-Latin-1", 2000, 0},
	{"ISO-8859-1-Windows-3.1-Latin-1", "ISO-8859-1-Windows-3.1-Latin-1", 2001, 0},
	{"csWindows31Latin1", "ISO-8859-1-Windows-3.1-Latin-1", 2001, 0},
	{"ISO-8859-2-Windows-Latin-2", "ISO-8859-2-Windows-Latin-2", 2002, 0},
	{"csWindows31Latin2", "ISO-8859-2-Windows-Latin-2", 2002, 0},
	{"ISO-8859-9-Windows-Latin-5", "ISO-8859-9-Windows-Latin-5", 2003, 0},
	{"csWindows31Latin5", "ISO-8859-9-Windows-Latin-5", 2003, 0},
	{"hp-roman8", "hp-roman8", 2004, 1},
	{"roman8", "hp-roman8", 2004, 1},
	{"r8", "hp-roman8", 2004, 1},
	{"csHPRoman8", "hp-roman8", 2004, 1},
	{"Adobe-Standard-Encoding", "Adobe-Standard-Encoding", 2005, 0},
	{"csAdobeStandardEncoding", "Adobe-Standard-Encoding", 2005, 0},
	{"Ventura-US", "Ventura-US", 2006, 0},
	{"csVenturaUS", "Ventura-US", 2006, 0},
	{"Ventura-International", "Ventura-International", 2007, 0},
	{"csVenturaInternational", "Ventura-International", 2007, 0},
	{"DEC-MCS", "DEC-MCS", 2008, 0},
	{"dec", "DEC-MCS", 2008, 0},
	{"csDECMCS", "DEC-MCS", 2008, 0},
	{"IBM850", "IBM850", 2009, 1},
	{"cp850", "IBM850", 2009, 1},
	{"850", "IBM850", 2009, 1},
	{"csPC850Multilingual", "IBM850", 2009, 1},
	{"IBM852", "IBM852", 2010, 1},
	{"cp852", "IBM852", 2010, 1},
	{"852", "IBM852", 2010, 1},
	{"csPCp852", "IBM852", 2010, 1},
	{"IBM437", "IBM437", 2011, 1},
	{"cp437", "IBM437", 2011, 1},
	{"437", "IBM437", 2011, 1},
	{"csPC8CodePage437", "IBM437", 2011, 1},
	{"PC8-Danish-Norwegian", "PC8-Danish-Norwegian", 2012, 0},
	{"csPC8DanishNorwegian", "PC8-Danish-Norwegian", 2012, 0},
	{"IBM862", "IBM862", 2013, 1},
	{"cp862", "IBM862", 2013, 1},
	{"862", "IBM862", 2013, 1},
	{"csPC862LatinHebrew", "IBM862", 2013, 1},
	{"PC8-Turkish", "PC8-Turkish", 2014, 0},
	{"csPC8Turkish", "PC8-Turkish", 2014, 0},
	{"IBM-Symbols", "IBM-Symbols", 2015, 0},
	{"csIBMSymbols", "IBM-Symbols", 2015, 0},
	{"IBM-Thai", "IBM-Thai", 2016, 0},
	{"csIBMThai", "IBM-Thai", 2016, 0},
	{"HP-Legal", "HP-Legal", 2017, 0},
	{"csHPLegal", "HP-Legal", 2017, 0},
	{"HP-Pi-font", "HP-Pi-font", 2018, 0},
	{"csHPPiFont", "HP-Pi-font", 2018, 0},
	{"HP-Math8", "HP-Math8", 2019, 0},
	{"csHPMath8", "HP-Math8", 2019, 0},
	{"Adobe-Symbol-Encoding", "Adobe-Symbol-Encoding", 2020, 0},
	{"csHPPSMath", "Adobe-Symbol-Encoding", 2020, 0},
	{"HP-DeskTop", "HP-DeskTop", 2021, 0},
	{"csHPDesktop", "HP-DeskTop", 2021, 0},
	{"Ventura-Math", "Ventura-Math", 2022, 0},
	{"csVenturaMath", "Ventura-Math", 2022, 0},
	{"Microsoft-Publishing", "Microsoft-Publishing", 2023, 0},
	{"csMicrosoftPublishing", "Microsoft-Publishing", 2023, 0},
	{"GB2312", "GB2312", 2025, 1},
	{"csGB2312", "GB2312", 2025, 1},
	{"Big5", "Big5", 2026, 1},
	{"csBig5", "Big5", 2026, 1},
	{"macintosh", "macintosh", 2027, 1},
	{"mac", "macintosh", 2027, 1},
	{"csMacintosh", "macintosh", 2027, 1},
	{"IBM037", "IBM037", 2028, 0},
	{"cp037", "IBM037", 2028, 0},
	{"ebcdic-cp-us", "IBM037", 2028, 0},
	{"ebcdic-cp-ca", "IBM037", 2028, 0},
	{"ebcdic-cp-wt", "IBM037", 2028, 0},
	{"ebcdic-cp-nl", "IBM037", 2028, 0},
	{"csIBM037", "IBM037", 2028, 0},
	{"IBM038", "IBM038", 2029, 0},
	{"EBCDIC-INT", "IBM038", 2029, 0},
	{"cp038", "IBM038", 2029, 0},
	{"csIBM038", "IBM038", 2029, 0},
	{"IBM273", "IBM273", 2030, 0},
	{"CP273", "IBM273", 2030, 0},
	{"csIBM273", "IBM273", 2030, 0},
	{"IBM274", "IBM274", 2031, 0},
	{"EBCDIC-BE", "IBM274", 2031, 0},
	{"CP274", "IBM274", 2031, 0},
	{"csIBM274", "IBM274", 2031, 0},
	{"IBM275", "IBM275", 2032, 0},
	{"EBCDIC-BR", "IBM275", 2032, 0},
	{"cp275", "IBM275", 2032, 0},
	{"csIBM275", "IBM275", 2032, 0},
	{"IBM277", "IBM277", 2033, 0},
	{"EBCDIC-CP-DK", "IBM277", 2033, 0},
	{"EBCDIC-CP-NO", "IBM277", 2033, 0},
	{"csIBM277", "IBM277", 2033, 0},
	{"IBM278", "IBM278", 2034, 0},
	{"CP278", "IBM278", 2034, 0},
	{"ebcdic-cp-fi", "IBM278", 2034, 0},
	{"ebcdic-cp-se", "IBM278", 2034, 0},
	{"csIBM278", "IBM278", 2034, 0},
	{"IBM280", "IBM280", 2035, 0},
	{"CP280", "IBM280", 2035, 0},
	{"ebcdic-cp-it", "IBM280", 2035, 0},
	{"csIBM280", "IBM280", 2035, 0},
	{"IBM281", "IBM281", 2036, 0},
	{"EBCDIC-JP-E", "IBM281", 2036, 0},
	{"cp281", "IBM281", 2036, 0},
	{"csIBM281", "IBM281", 2036, 0},
	{"IBM284", "IBM284", 2037, 0},
	{"CP284", "IBM284", 2037, 0},
	{"ebcdic-cp-es", "IBM284", 2037, 0},
	{"csIBM284", "IBM284", 2037, 0},
	{"IBM285", "IBM285", 2038, 0},
	{"CP285", "IBM285", 2038, 0},
	{"ebcdic-cp-gb", "IBM285", 2038, 0},
	{"csIBM285", "IBM285", 2038, 0},
	{"IBM290", "IBM290", 2039, 0},
	{"cp290", "IBM290", 2039, 0},
	{"EBCDIC-JP-kana", "IBM290", 2039, 0},
	{"csIBM290", "IBM290", 2039, 0},
	{"IBM297", "IBM297", 2040, 0},
	{"cp297", "IBM297", 2040, 0},
	{"ebcdic-cp-fr", "IBM297", 2040, 0},
	{"csIBM297", "IBM297", 2040, 0},
	{"IBM420", "IBM420", 2041, 0},
	{"cp420", "IBM420", 2041, 0},
	{"ebcdic-cp-ar1", "IBM420", 2041, 0},
	{"csIBM420", "IBM420", 2041, 0},
	{"IBM423", "IBM423", 2042, 0},
	{"cp423", "IBM423", 2042, 0},
	{"ebcdic-cp-gr", "IBM423", 2042, 0},
	{"csIBM423", "IBM423", 2042, 0},
	{"IBM424", "IBM424", 2043, 0},
	{"cp424", "IBM424", 2043, 0},
	{"ebcdic-cp-he", "IBM424", 2043, 0},
	{"csIBM424", "IBM424", 2043, 0},
	{"IBM500", "IBM500", 2044, 0},
	{"CP500", "IBM500", 2044, 0},
	{"ebcdic-cp-be", "IBM500", 2044, 0},
	{"ebcdic-cp-ch", "IBM500", 2044, 0},
	{"csIBM500", "IBM500", 2044, 0},
	{"IBM851", "IBM851", 2045, 0},
	{"cp851", "IBM851", 2045, 0},
	{"851", "IBM851", 2045, 0},
	{"csIBM851", "IBM851", 2045, 0},
	{"IBM855", "IBM855", 2046, 1},
	{"cp855", "IBM855", 2046, 1},
	{"855", "IBM855", 2046, 1},
	{"csIBM855", "IBM855", 2046, 1},
	{"IBM857", "IBM857", 2047, 1},
	{"cp857", "IBM857", 2047, 1},
	{"857", "IBM857", 2047, 1},
	{"csIBM857", "IBM857", 2047, 1},
	{"IBM860", "IBM860", 2048, 1},
	{"cp860", "IBM860", 2048, 1},
	{"860", "IBM860", 2048, 1},
	{"csIBM860", "IBM860", 2048, 1},
	{"IBM861", "IBM861", 2049, 1},
	{"cp861", "IBM861", 2049, 1},
	{"861", "IBM861", 2049, 1},
	{"cp-is", "IBM861", 2049, 1},
	{"csIBM861", "IBM861", 2049, 1},
	{"IBM863", "IBM863", 2050, 1},
	{"cp863", "IBM863", 2050, 1},
	{"863", "IBM863", 2050, 1},
	{"csIBM863", "IBM863", 2050, 1},
	{"IBM864", "IBM864", 2051, 1},
	{"cp864", "IBM864", 2051, 1},
	{"csIBM864", "IBM864", 2051, 1},
	{"IBM865", "IBM865", 2052, 1},
	{"cp865", "IBM865", 2052, 1},
	{"865", "IBM865", 2052, 1},
	{"csIBM865", "IBM865", 2052, 1},
	{"IBM868", "IBM868", 2053, 0},
	{"CP868", "IBM868", 2053, 0},
	{"cp-ar", "IBM868", 2053, 0},
	{"csIBM868", "IBM868", 2053, 0},
	{"IBM869", "IBM869", 2054, 1},
	{"cp869", "IBM869", 2054, 1},
	{"869", "IBM869", 2054, 1},
	{"cp-gr", "IBM869", 2054, 1},
	{"csIBM869", "IBM869", 2054, 1},
	{"IBM870", "IBM870", 2055, 0},
	{"CP870", "IBM870", 2055, 0},
	{"ebcdic-cp-roece", "IBM870", 2055, 0},
	{"ebcdic-cp-yu", "IBM870", 2055, 0},
	{"csIBM870", "IBM870", 2055, 0},
	{"IBM871", "IBM871", 2056, 0},
	{"CP871", "IBM871", 2056, 0},
	{"ebcdic-cp-is", "IBM871", 2056, 0},
	{"csIBM871", "IBM871", 2056, 0},
	{"IBM880", "IBM880", 2057, 0},
	{"cp880", "IBM880", 2057, 0},
	{"EBCDIC-Cyrillic", "IBM880", 2057, 0},
	{"csIBM880", "IBM880", 2057, 0},
	{"IBM891", "IBM891", 2058, 0},
	{"cp891", "IBM891", 2058, 0},
	{"csIBM891", "IBM891", 2058, 0},
	{"IBM903", "IBM903", 2059, 0},
	{"cp903", "IBM903", 2059, 0},
	{"csIBM903", "IBM903", 2059, 0},
	{"IBM904", "IBM904", 2060, 0},
	{"cp904", "IBM904", 2060, 0},
	{"904", "IBM904", 2060, 0},
	{"csIBBM904", "IBM904", 2060, 0},
	{"IBM905", "IBM905", 2061, 0},
	{"CP905", "IBM905", 2061, 0},
	{"ebcdic-cp-tr", "IBM905", 2061, 0},
	{"csIBM905", "IBM905", 2061, 0},
	{"IBM918", "IBM918", 2062, 0},
	{"CP918", "IBM918", 2062, 0},
	{"ebcdic-cp-ar2", "IBM918", 2062, 0},
	{"csIBM918", "IBM918", 2062, 0},
	{"IBM1026", "IBM1026", 2063, 0},
	{"CP1026", "IBM1026", 2063, 0},
	{"csIBM1026", "IBM1026", 2063, 0},
	{"EBCDIC-AT-DE", "EBCDIC-AT-DE", 2064, 0},
	{"csIBMEBCDICATDE", "EBCDIC-AT-DE", 2064, 0},
	{"EBCDIC-AT-DE-A", "EBCDIC-AT-DE-A", 2065, 0},
	{"csEBCDICATDEA", "EBCDIC-AT-DE-A", 2065, 0},
	{"EBCDIC-CA-FR", "EBCDIC-CA-FR", 2066, 0},
	{"csEBCDICCAFR", "EBCDIC-CA-FR", 2066, 0},
	{"EBCDIC-DK-NO", "EBCDIC-DK-NO", 2067, 0},
	{"csEBCDICDKNO", "EBCDIC-DK-NO", 2067, 0},
	{"EBCDIC-DK-NO-A", "EBCDIC-DK-NO-A", 2068, 0},
	{"csEBCDICDKNOA", "EBCDIC-DK-NO-A", 2068, 0},
	{"EBCDIC-FI-SE", "EBCDIC-FI-SE", 2069, 0},
	{"csEBCDICFISE", "EBCDIC-FI-SE", 2069, 0},
	{"EBCDIC-FI-SE-A", "EBCDIC-FI-SE-A", 2070, 0},
	{"csEBCDICFISEA", "EBCDIC-FI-SE-A", 2070, 0},
	{"EBCDIC-FR", "EBCDIC-FR", 2071, 0},
	{"csEBCDICFR", "EBCDIC-FR", 2071, 0},
	{"EBCDIC-IT", "EBCDIC-IT", 2072, 0},
	{"csEBCDICIT", "EBCDIC-IT", 2072, 0},
	{"EBCDIC-PT", "EBCDIC-PT", 2073, 0},
	{"csEBCDICPT", "EBCDIC-PT", 2073, 0},
	{"EBCDIC-ES", "EBCDIC-ES", 2074, 0},
	{"csEBCDICES", "EBCDIC-ES", 2074, 0},
	{"EBCDIC-ES-A", "EBCDIC-ES-A", 2075, 0},
	{"csEBCDICESA", "EBCDIC-ES-A", 2075, 0},
	{"EBCDIC-ES-S", "EBCDIC-ES-S", 2076, 0},
	{"csEBCDICESS", "EBCDIC-ES-S", 2076, 0},
	{"EBCDIC-UK", "EBCDIC-UK", 2077, 0},
	{"csEBCDICUK", "EBCDIC-UK", 2077, 0},
	{"EBCDIC-US", "EBCDIC-US", 2078, 0},
	{"csEBCDICUS", "EBCDIC-US", 2078, 0},
	{"UNKNOWN-8BIT", "UNKNOWN-8BIT", 2079, 0},
	{"csUnknown8BiT", "UNKNOWN-8BIT", 2079, 0},
	{"MNEMONIC", "MNEMONIC", 2080, 0},
	{"csMnemonic", "MNEMONIC", 2080, 0},
	{"MNEM", "MNEM", 2081, 0},
	{"csMnem", "MNEM", 2081, 0},
	{"VISCII", "VISCII", 2082, 1},
	{"csVISCII", "VISCII", 2082, 1},
	{"VIQR", "VIQR", 2083, 0},
	{"csVIQR", "VIQR", 2083, 0},
	{"KOI8-R", "KOI8-R", 2084, 1},
	{"csKOI8R", "KOI8-R", 2084, 1},
	{"HZ-GB-2312", "HZ-GB-2312", 2085, 1},
	{"IBM866", "IBM866", 2086, 1},
	{"cp866", "IBM866", 2086, 1},
	{"866", "IBM866", 2086, 1},
	{"csIBM866", "IBM866", 2086, 1},
	{"IBM775", "IBM775", 2087, 1},
	{"cp775", "IBM775", 2087, 1},
	{"csPC775Baltic", "IBM775", 2087, 1},
	{"KOI8-U", "KOI8-U", 2088, 1},
	{"IBM00858", "IBM00858", 2089, 0},
	{"CCSID00858", "IBM00858", 2089, 0},
	{"CP00858", "IBM00858", 2089, 0},
	{"PC-Multilingual-850+euro", "IBM00858", 2089, 0},
	{"IBM00924", "IBM00924", 2090, 0},
	{"CCSID00924", "IBM00924", 2090, 0},
	{"CP00924", "IBM00924", 2090, 0},
	{"ebcdic-Latin9--euro", "IBM00924", 2090, 0},
	{"IBM01140", "IBM01140", 2091, 0},
	{"CCSID01140", "IBM01140", 2091, 0},
	{"CP01140", "IBM01140", 2091, 0},
	{"ebcdic-us-37+euro", "IBM01140", 2091, 0},
	{"IBM01141", "IBM01141", 2092, 0},
	{"CCSID01141", "IBM01141", 2092, 0},
	{"CP01141", "IBM01141", 2092, 0},
	{"ebcdic-de-273+euro", "IBM01141", 2092, 0},
	{"IBM01142", "IBM01142", 2093, 0},
	{"CCSID01142", "IBM01142", 2093, 0},
	{"CP01142", "IBM01142", 2093, 0},
	{"ebcdic-dk-277+euro", "IBM01142", 2093, 0},
	{"ebcdic-no-277+euro", "IBM01142", 2093, 0},
	{"IBM01143", "IBM01143", 2094, 0},
	{"CCSID01143", "IBM01143", 2094, 0},
	{"CP01143", "IBM01143", 2094, 0},
	{"ebcdic-fi-278+euro", "IBM01143", 2094, 0},
	{"ebcdic-se-278+euro", "IBM01143", 2094, 0},
	{"IBM01144", "IBM01144", 2095, 0},
	{"CCSID01144", "IBM01144", 2095, 0},
	{"CP01144", "IBM01144", 2095, 0},
	{"ebcdic-it-280+euro", "IBM01144", 2095, 0},
	{"IBM01145", "IBM01145", 2096, 0},
	{"CCSID01145", "IBM01145", 2096, 0},
	{"CP01145", "IBM01145", 2096, 0},
	{"ebcdic-es-284+euro", "IBM01145", 2096, 0},
	{"IBM01146", "IBM01146", 2097, 0},
	{"CCSID01146", "IBM01146", 2097, 0},
	{"CP01146", "IBM01146", 2097, 0},
	{"ebcdic-gb-285+euro", "IBM01146", 2097, 0},
	{"IBM01147", "IBM01147", 2098, 0},
	{"CCSID01147", "IBM01147", 2098, 0},
	{"CP01147", "IBM01147", 2098, 0},
	{"ebcdic-fr-297+euro", "IBM01147", 2098, 0},
	{"IBM01148", "IBM01148", 2099, 0},
	{"CCSID01148", "IBM01148", 2099, 0},
	{"CP01148", "IBM01148", 2099, 0},
	{"ebcdic-international-500+euro", "IBM01148", 2099, 0},
	{"IBM01149", "IBM01149", 2100, 0},
	{"CCSID01149", "IBM01149", 2100, 0},
	{"CP01149", "IBM01149", 2100, 0},
	{"ebcdic-is-871+euro", "IBM01149", 2100, 0},
	{"Big5-HKSCS", "Big5-HKSCS", 2101, 1},
	{"IBM1047", "IBM1047", 2102, 0},
	{"IBM-1047", "IBM1047", 2102, 0},
	{"PTCP154", "PTCP154", 2103, 0},
	{"csPTCP154", "PTCP154", 2103, 0},
	{"PT154", "PTCP154", 2103, 0},
	{"CP154", "PTCP154", 2103, 0},
	{"Cyrillic-Asian", "PTCP154", 2103, 0},
	{"Amiga-1251", "Amiga-1251", 2104, 0},
	{"Ami1251", "Amiga-1251", 2104, 0},
	{"Amiga1251", "Amiga-1251", 2104, 0},
	{"Ami-1251", "Amiga-1251", 2104, 0},
	{"KOI7-switched", "KOI7-switched", 2105, 0},
	{"windows-1250", "windows-1250", 2250, 1},
	{"windows-1251", "windows-1251", 2251, 1},
	{"windows-1252", "windows-1252", 2252, 1},
	{"windows-1253", "windows-1253", 2253, 1},
	{"windows-1254", "windows-1254", 2254, 1},
	{"windows-1255", "windows-1255", 2255, 1},
	{"windows-1256", "windows-1256", 2256, 1},
	{"windows-1257", "windows-1257", 2257, 1},
	{"windows-1258", "windows-1258", 2258, 1},
	{"TIS-620", "TIS-620", 2259, 1},
	{"windows-874", "TIS-620", 2259, 1}
};


static HashTableX s_table;
static bool       s_isInitialized = false;

void reset_iana_charset ( ) {
	s_table.reset();
}

// Slightly modified from getTextEntity
short get_iana_charset(char *cs, int len)
{
    if (!s_isInitialized){
	// set up the hash table
	if ( ! s_table.set ( 8,4,4096,NULL,0,false,0,"ianatbl") )
	    return log("build: Could not init table of "
		       "IANA Charsets.");
	// now add in all the charset entries
	long n = (long)sizeof(s_charsets) / (long)sizeof(IANACharset);
	// turn off quickpolling
	char saved = g_conf.m_useQuickpoll;
	g_conf.m_useQuickpoll = false;
	for ( long i = 0 ; i < n ; i++ ) {
	    long long h = hash64Lower_a ( s_charsets[i].name, strlen(s_charsets[i].name) );
	    // store the charset index in the hash table as score
		if ( ! s_table.addTerm(&h, i+1) ) 
		return log("build: add term failed");
	}
	g_conf.m_useQuickpoll = saved;
	s_isInitialized = true;
    }
    long long h = hash64Lower_a ( cs , len );
    // get the entity index from table (stored in the score field)
    long i = (long) s_table.getScore ( &h );
    // return 0 if no match
    if ( i == 0 ) return csUnknown;
    // return the iso character
    return (short)s_charsets[i-1].mib_enum;
}

char *get_charset_str(short cs)
{
    int s=0;
    int e=sizeof(s_charsets)/sizeof(IANACharset)-2;
    int i;
    if (cs < s_charsets[s].mib_enum) return NULL;
    if (cs > s_charsets[e].mib_enum) return NULL;
    
    // Binary search
    while (1){
	// Check endpoints
	if (cs == s_charsets[s].mib_enum) return s_charsets[s].mime;
	if (cs ==s_charsets[e].mib_enum) return s_charsets[e].mime;

	// check midpoint
	i = (s+e)/2;
	if (cs ==s_charsets[i].mib_enum) return s_charsets[i].mime;
	
	// end of search 
	if ((e-s)<3) return NULL;
	
	// reset either endpoint
	if (cs < s_charsets[i].mib_enum){e = i-1;continue;}
	if (cs > s_charsets[i].mib_enum){s = i+1;continue;}
    }
    
}

// is this charset supported?
bool supportedCharset(short cs) {
    int s=0;
    int e=sizeof(s_charsets)/sizeof(IANACharset)-2;
    int i;
    if (cs < s_charsets[s].mib_enum) return false;
    if (cs > s_charsets[e].mib_enum) return false;
    
    // Binary search
    while (1){
	// Check endpoints
	if (cs == s_charsets[s].mib_enum) return s_charsets[s].supported;
	if (cs ==s_charsets[e].mib_enum) return s_charsets[e].supported;

	// check midpoint
	i = (s+e)/2;
	if (cs ==s_charsets[i].mib_enum) return s_charsets[i].supported;
	
	// end of search 
	if ((e-s)<3) return false;
	
	// reset either endpoint
	if (cs < s_charsets[i].mib_enum){e = i-1;continue;}
	if (cs > s_charsets[i].mib_enum){s = i+1;continue;}
    }	
}


