/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/transport_sockets/tls/v3/common.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/extensions/transport_sockets/tls/v3/common.upbdefs.h"
#include "envoy/extensions/transport_sockets/tls/v3/common.upb.h"

extern _upb_DefPool_Init envoy_config_core_v3_base_proto_upbdefinit;
extern _upb_DefPool_Init envoy_config_core_v3_extension_proto_upbdefinit;
extern _upb_DefPool_Init envoy_type_matcher_v3_string_proto_upbdefinit;
extern _upb_DefPool_Init google_protobuf_any_proto_upbdefinit;
extern _upb_DefPool_Init google_protobuf_wrappers_proto_upbdefinit;
extern _upb_DefPool_Init envoy_annotations_deprecation_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_migrate_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_sensitive_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_status_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_versioning_proto_upbdefinit;
extern _upb_DefPool_Init validate_validate_proto_upbdefinit;
static const char descriptor[4173] = {'\n', '6', 'e', 'n', 'v', 'o', 'y', '/', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '/', 't', 'r', 'a', 'n', 's', 'p', 
'o', 'r', 't', '_', 's', 'o', 'c', 'k', 'e', 't', 's', '/', 't', 'l', 's', '/', 'v', '3', '/', 'c', 'o', 'm', 'm', 'o', 'n', 
'.', 'p', 'r', 'o', 't', 'o', '\022', ')', 'e', 'n', 'v', 'o', 'y', '.', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '.', 
't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', '_', 's', 'o', 'c', 'k', 'e', 't', 's', '.', 't', 'l', 's', '.', 'v', '3', '\032', 
'\037', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', '/', 'b', 'a', 's', 
'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '$', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 
'e', '/', 'v', '3', '/', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', '.', 'p', 'r', 'o', 't', 'o', '\032', '\"', 'e', 'n', 'v', 
'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'm', 'a', 't', 'c', 'h', 'e', 'r', '/', 'v', '3', '/', 's', 't', 'r', 'i', 'n', 'g', 
'.', 'p', 'r', 'o', 't', 'o', '\032', '\031', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'a', 
'n', 'y', '.', 'p', 'r', 'o', 't', 'o', '\032', '\036', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', 
'/', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '#', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'n', 
'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'd', 'e', 'p', 'r', 'e', 'c', 'a', 't', 'i', 'o', 'n', '.', 'p', 'r', 'o', 
't', 'o', '\032', '\036', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'm', 'i', 'g', 'r', 
'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', ' ', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 
'n', 's', '/', 's', 'e', 'n', 's', 'i', 't', 'i', 'v', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 
'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', 
'!', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 'r', 's', 'i', 'o', 'n', 
'i', 'n', 'g', '.', 'p', 'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 
'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\"', '\362', '\003', '\n', '\r', 'T', 'l', 's', 'P', 'a', 'r', 'a', 'm', 'e', 't', 'e', 
'r', 's', '\022', '\217', '\001', '\n', '\034', 't', 'l', 's', '_', 'm', 'i', 'n', 'i', 'm', 'u', 'm', '_', 'p', 'r', 'o', 't', 'o', 'c', 
'o', 'l', '_', 'v', 'e', 'r', 's', 'i', 'o', 'n', '\030', '\001', ' ', '\001', '(', '\016', '2', 'D', '.', 'e', 'n', 'v', 'o', 'y', '.', 
'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '.', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', '_', 's', 'o', 'c', 'k', 
'e', 't', 's', '.', 't', 'l', 's', '.', 'v', '3', '.', 'T', 'l', 's', 'P', 'a', 'r', 'a', 'm', 'e', 't', 'e', 'r', 's', '.', 
'T', 'l', 's', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'B', '\010', '\372', 'B', '\005', '\202', '\001', '\002', '\020', '\001', 'R', '\031', 't', 'l', 
's', 'M', 'i', 'n', 'i', 'm', 'u', 'm', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\022', '\217', 
'\001', '\n', '\034', 't', 'l', 's', '_', 'm', 'a', 'x', 'i', 'm', 'u', 'm', '_', 'p', 'r', 'o', 't', 'o', 'c', 'o', 'l', '_', 'v', 
'e', 'r', 's', 'i', 'o', 'n', '\030', '\002', ' ', '\001', '(', '\016', '2', 'D', '.', 'e', 'n', 'v', 'o', 'y', '.', 'e', 'x', 't', 'e', 
'n', 's', 'i', 'o', 'n', 's', '.', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', '_', 's', 'o', 'c', 'k', 'e', 't', 's', '.', 
't', 'l', 's', '.', 'v', '3', '.', 'T', 'l', 's', 'P', 'a', 'r', 'a', 'm', 'e', 't', 'e', 'r', 's', '.', 'T', 'l', 's', 'P', 
'r', 'o', 't', 'o', 'c', 'o', 'l', 'B', '\010', '\372', 'B', '\005', '\202', '\001', '\002', '\020', '\001', 'R', '\031', 't', 'l', 's', 'M', 'a', 'x', 
'i', 'm', 'u', 'm', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\022', '#', '\n', '\r', 'c', 'i', 
'p', 'h', 'e', 'r', '_', 's', 'u', 'i', 't', 'e', 's', '\030', '\003', ' ', '\003', '(', '\t', 'R', '\014', 'c', 'i', 'p', 'h', 'e', 'r', 
'S', 'u', 'i', 't', 'e', 's', '\022', '\037', '\n', '\013', 'e', 'c', 'd', 'h', '_', 'c', 'u', 'r', 'v', 'e', 's', '\030', '\004', ' ', '\003', 
'(', '\t', 'R', '\n', 'e', 'c', 'd', 'h', 'C', 'u', 'r', 'v', 'e', 's', '\"', 'O', '\n', '\013', 'T', 'l', 's', 'P', 'r', 'o', 't', 
'o', 'c', 'o', 'l', '\022', '\014', '\n', '\010', 'T', 'L', 'S', '_', 'A', 'U', 'T', 'O', '\020', '\000', '\022', '\013', '\n', '\007', 'T', 'L', 'S', 
'v', '1', '_', '0', '\020', '\001', '\022', '\013', '\n', '\007', 'T', 'L', 'S', 'v', '1', '_', '1', '\020', '\002', '\022', '\013', '\n', '\007', 'T', 'L', 
'S', 'v', '1', '_', '2', '\020', '\003', '\022', '\013', '\n', '\007', 'T', 'L', 'S', 'v', '1', '_', '3', '\020', '\004', ':', '&', '\232', '\305', '\210', 
'\036', '!', '\n', '\037', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'a', 'u', 't', 'h', '.', 'T', 'l', 's', 
'P', 'a', 'r', 'a', 'm', 'e', 't', 'e', 'r', 's', '\"', '\317', '\001', '\n', '\022', 'P', 'r', 'i', 'v', 'a', 't', 'e', 'K', 'e', 'y', 
'P', 'r', 'o', 'v', 'i', 'd', 'e', 'r', '\022', ',', '\n', '\r', 'p', 'r', 'o', 'v', 'i', 'd', 'e', 'r', '_', 'n', 'a', 'm', 'e', 
'\030', '\001', ' ', '\001', '(', '\t', 'B', '\007', '\372', 'B', '\004', 'r', '\002', '\020', '\001', 'R', '\014', 'p', 'r', 'o', 'v', 'i', 'd', 'e', 'r', 
'N', 'a', 'm', 'e', '\022', 'A', '\n', '\014', 't', 'y', 'p', 'e', 'd', '_', 'c', 'o', 'n', 'f', 'i', 'g', '\030', '\003', ' ', '\001', '(', 
'\013', '2', '\024', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'A', 'n', 'y', 'B', '\006', 
'\270', '\267', '\213', '\244', '\002', '\001', 'H', '\000', 'R', '\013', 't', 'y', 'p', 'e', 'd', 'C', 'o', 'n', 'f', 'i', 'g', ':', '+', '\232', '\305', 
'\210', '\036', '&', '\n', '$', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'a', 'u', 't', 'h', '.', 'P', 'r', 
'i', 'v', 'a', 't', 'e', 'K', 'e', 'y', 'P', 'r', 'o', 'v', 'i', 'd', 'e', 'r', 'B', '\r', '\n', '\013', 'c', 'o', 'n', 'f', 'i', 
'g', '_', 't', 'y', 'p', 'e', 'J', '\004', '\010', '\002', '\020', '\003', 'R', '\006', 'c', 'o', 'n', 'f', 'i', 'g', '\"', '\310', '\005', '\n', '\016', 
'T', 'l', 's', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', '\022', 'M', '\n', '\021', 'c', 'e', 'r', 't', 'i', 'f', 'i', 
'c', 'a', 't', 'e', '_', 'c', 'h', 'a', 'i', 'n', '\030', '\001', ' ', '\001', '(', '\013', '2', ' ', '.', 'e', 'n', 'v', 'o', 'y', '.', 
'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'D', 'a', 't', 'a', 'S', 'o', 'u', 'r', 'c', 'e', 
'R', '\020', 'c', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'C', 'h', 'a', 'i', 'n', '\022', 'I', '\n', '\013', 'p', 'r', 'i', 
'v', 'a', 't', 'e', '_', 'k', 'e', 'y', '\030', '\002', ' ', '\001', '(', '\013', '2', ' ', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 
'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'D', 'a', 't', 'a', 'S', 'o', 'u', 'r', 'c', 'e', 'B', '\006', 
'\270', '\267', '\213', '\244', '\002', '\001', 'R', '\n', 'p', 'r', 'i', 'v', 'a', 't', 'e', 'K', 'e', 'y', '\022', '@', '\n', '\006', 'p', 'k', 'c', 
's', '1', '2', '\030', '\010', ' ', '\001', '(', '\013', '2', ' ', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 
'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'D', 'a', 't', 'a', 'S', 'o', 'u', 'r', 'c', 'e', 'B', '\006', '\270', '\267', '\213', '\244', '\002', 
'\001', 'R', '\006', 'p', 'k', 'c', 's', '1', '2', '\022', 'S', '\n', '\021', 'w', 'a', 't', 'c', 'h', 'e', 'd', '_', 'd', 'i', 'r', 'e', 
'c', 't', 'o', 'r', 'y', '\030', '\007', ' ', '\001', '(', '\013', '2', '&', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 
'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'W', 'a', 't', 'c', 'h', 'e', 'd', 'D', 'i', 'r', 'e', 'c', 't', 'o', 'r', 
'y', 'R', '\020', 'w', 'a', 't', 'c', 'h', 'e', 'd', 'D', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', '\022', 'o', '\n', '\024', 'p', 'r', 
'i', 'v', 'a', 't', 'e', '_', 'k', 'e', 'y', '_', 'p', 'r', 'o', 'v', 'i', 'd', 'e', 'r', '\030', '\006', ' ', '\001', '(', '\013', '2', 
'=', '.', 'e', 'n', 'v', 'o', 'y', '.', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '.', 't', 'r', 'a', 'n', 's', 'p', 
'o', 'r', 't', '_', 's', 'o', 'c', 'k', 'e', 't', 's', '.', 't', 'l', 's', '.', 'v', '3', '.', 'P', 'r', 'i', 'v', 'a', 't', 
'e', 'K', 'e', 'y', 'P', 'r', 'o', 'v', 'i', 'd', 'e', 'r', 'R', '\022', 'p', 'r', 'i', 'v', 'a', 't', 'e', 'K', 'e', 'y', 'P', 
'r', 'o', 'v', 'i', 'd', 'e', 'r', '\022', 'D', '\n', '\010', 'p', 'a', 's', 's', 'w', 'o', 'r', 'd', '\030', '\003', ' ', '\001', '(', '\013', 
'2', ' ', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'D', 
'a', 't', 'a', 'S', 'o', 'u', 'r', 'c', 'e', 'B', '\006', '\270', '\267', '\213', '\244', '\002', '\001', 'R', '\010', 'p', 'a', 's', 's', 'w', 'o', 
'r', 'd', '\022', 'A', '\n', '\013', 'o', 'c', 's', 'p', '_', 's', 't', 'a', 'p', 'l', 'e', '\030', '\004', ' ', '\001', '(', '\013', '2', ' ', 
'.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'D', 'a', 't', 
'a', 'S', 'o', 'u', 'r', 'c', 'e', 'R', '\n', 'o', 'c', 's', 'p', 'S', 't', 'a', 'p', 'l', 'e', '\022', 'b', '\n', '\034', 's', 'i', 
'g', 'n', 'e', 'd', '_', 'c', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', '_', 't', 'i', 'm', 'e', 's', 't', 'a', 'm', 
'p', '\030', '\005', ' ', '\003', '(', '\013', '2', ' ', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 
'r', 'e', '.', 'v', '3', '.', 'D', 'a', 't', 'a', 'S', 'o', 'u', 'r', 'c', 'e', 'R', '\032', 's', 'i', 'g', 'n', 'e', 'd', 'C', 
'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'T', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', ':', '\'', '\232', '\305', '\210', '\036', 
'\"', '\n', ' ', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'a', 'u', 't', 'h', '.', 'T', 'l', 's', 'C', 
'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', '\"', '\213', '\001', '\n', '\024', 'T', 'l', 's', 'S', 'e', 's', 's', 'i', 'o', 'n', 
'T', 'i', 'c', 'k', 'e', 't', 'K', 'e', 'y', 's', '\022', 'D', '\n', '\004', 'k', 'e', 'y', 's', '\030', '\001', ' ', '\003', '(', '\013', '2', 
' ', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'D', 'a', 
't', 'a', 'S', 'o', 'u', 'r', 'c', 'e', 'B', '\016', '\372', 'B', '\005', '\222', '\001', '\002', '\010', '\001', '\270', '\267', '\213', '\244', '\002', '\001', 'R', 
'\004', 'k', 'e', 'y', 's', ':', '-', '\232', '\305', '\210', '\036', '(', '\n', '&', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', 
'2', '.', 'a', 'u', 't', 'h', '.', 'T', 'l', 's', 'S', 'e', 's', 's', 'i', 'o', 'n', 'T', 'i', 'c', 'k', 'e', 't', 'K', 'e', 
'y', 's', '\"', 's', '\n', '!', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'P', 'r', 'o', 'v', 'i', 'd', 'e', 'r', 
'P', 'l', 'u', 'g', 'i', 'n', 'I', 'n', 's', 't', 'a', 'n', 'c', 'e', '\022', '#', '\n', '\r', 'i', 'n', 's', 't', 'a', 'n', 'c', 
'e', '_', 'n', 'a', 'm', 'e', '\030', '\001', ' ', '\001', '(', '\t', 'R', '\014', 'i', 'n', 's', 't', 'a', 'n', 'c', 'e', 'N', 'a', 'm', 
'e', '\022', ')', '\n', '\020', 'c', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', '_', 'n', 'a', 'm', 'e', '\030', '\002', ' ', '\001', 
'(', '\t', 'R', '\017', 'c', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'N', 'a', 'm', 'e', '\"', '\244', '\002', '\n', '\025', 'S', 
'u', 'b', 'j', 'e', 'c', 't', 'A', 'l', 't', 'N', 'a', 'm', 'e', 'M', 'a', 't', 'c', 'h', 'e', 'r', '\022', 'o', '\n', '\010', 's', 
'a', 'n', '_', 't', 'y', 'p', 'e', '\030', '\001', ' ', '\001', '(', '\016', '2', 'H', '.', 'e', 'n', 'v', 'o', 'y', '.', 'e', 'x', 't', 
'e', 'n', 's', 'i', 'o', 'n', 's', '.', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', '_', 's', 'o', 'c', 'k', 'e', 't', 's', 
'.', 't', 'l', 's', '.', 'v', '3', '.', 'S', 'u', 'b', 'j', 'e', 'c', 't', 'A', 'l', 't', 'N', 'a', 'm', 'e', 'M', 'a', 't', 
'c', 'h', 'e', 'r', '.', 'S', 'a', 'n', 'T', 'y', 'p', 'e', 'B', '\n', '\372', 'B', '\007', '\202', '\001', '\004', '\020', '\001', ' ', '\000', 'R', 
'\007', 's', 'a', 'n', 'T', 'y', 'p', 'e', '\022', 'H', '\n', '\007', 'm', 'a', 't', 'c', 'h', 'e', 'r', '\030', '\002', ' ', '\001', '(', '\013', 
'2', '$', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 'v', '3', '.', 
'S', 't', 'r', 'i', 'n', 'g', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'B', '\010', '\372', 'B', '\005', '\212', '\001', '\002', '\020', '\001', 'R', '\007', 
'm', 'a', 't', 'c', 'h', 'e', 'r', '\"', 'P', '\n', '\007', 'S', 'a', 'n', 'T', 'y', 'p', 'e', '\022', '\030', '\n', '\024', 'S', 'A', 'N', 
'_', 'T', 'Y', 'P', 'E', '_', 'U', 'N', 'S', 'P', 'E', 'C', 'I', 'F', 'I', 'E', 'D', '\020', '\000', '\022', '\t', '\n', '\005', 'E', 'M', 
'A', 'I', 'L', '\020', '\001', '\022', '\007', '\n', '\003', 'D', 'N', 'S', '\020', '\002', '\022', '\007', '\n', '\003', 'U', 'R', 'I', '\020', '\003', '\022', '\016', 
'\n', '\n', 'I', 'P', '_', 'A', 'D', 'D', 'R', 'E', 'S', 'S', '\020', '\004', '\"', '\220', '\014', '\n', '\034', 'C', 'e', 'r', 't', 'i', 'f', 
'i', 'c', 'a', 't', 'e', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'i', 'o', 'n', 'C', 'o', 'n', 't', 'e', 'x', 't', '\022', 'W', '\n', 
'\n', 't', 'r', 'u', 's', 't', 'e', 'd', '_', 'c', 'a', '\030', '\001', ' ', '\001', '(', '\013', '2', ' ', '.', 'e', 'n', 'v', 'o', 'y', 
'.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'D', 'a', 't', 'a', 'S', 'o', 'u', 'r', 'c', 
'e', 'B', '\026', '\362', '\230', '\376', '\217', '\005', '\020', '\022', '\016', 'c', 'a', '_', 'c', 'e', 'r', 't', '_', 's', 'o', 'u', 'r', 'c', 'e', 
'R', '\t', 't', 'r', 'u', 's', 't', 'e', 'd', 'C', 'a', '\022', '\255', '\001', '\n', ' ', 'c', 'a', '_', 'c', 'e', 'r', 't', 'i', 'f', 
'i', 'c', 'a', 't', 'e', '_', 'p', 'r', 'o', 'v', 'i', 'd', 'e', 'r', '_', 'i', 'n', 's', 't', 'a', 'n', 'c', 'e', '\030', '\r', 
' ', '\001', '(', '\013', '2', 'L', '.', 'e', 'n', 'v', 'o', 'y', '.', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '.', 't', 
'r', 'a', 'n', 's', 'p', 'o', 'r', 't', '_', 's', 'o', 'c', 'k', 'e', 't', 's', '.', 't', 'l', 's', '.', 'v', '3', '.', 'C', 
'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'P', 'r', 'o', 'v', 'i', 'd', 'e', 'r', 'P', 'l', 'u', 'g', 'i', 'n', 'I', 
'n', 's', 't', 'a', 'n', 'c', 'e', 'B', '\026', '\362', '\230', '\376', '\217', '\005', '\020', '\022', '\016', 'c', 'a', '_', 'c', 'e', 'r', 't', '_', 
's', 'o', 'u', 'r', 'c', 'e', 'R', '\035', 'c', 'a', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'P', 'r', 'o', 'v', 
'i', 'd', 'e', 'r', 'I', 'n', 's', 't', 'a', 'n', 'c', 'e', '\022', 'S', '\n', '\021', 'w', 'a', 't', 'c', 'h', 'e', 'd', '_', 'd', 
'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', '\030', '\013', ' ', '\001', '(', '\013', '2', '&', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 
'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'W', 'a', 't', 'c', 'h', 'e', 'd', 'D', 'i', 'r', 'e', 'c', 
't', 'o', 'r', 'y', 'R', '\020', 'w', 'a', 't', 'c', 'h', 'e', 'd', 'D', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', '\022', 'F', '\n', 
'\027', 'v', 'e', 'r', 'i', 'f', 'y', '_', 'c', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', '_', 's', 'p', 'k', 'i', '\030', 
'\003', ' ', '\003', '(', '\t', 'B', '\016', '\372', 'B', '\013', '\222', '\001', '\010', '\"', '\006', 'r', '\004', '\020', ',', '(', ',', 'R', '\025', 'v', 'e', 
'r', 'i', 'f', 'y', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'S', 'p', 'k', 'i', '\022', 'F', '\n', '\027', 'v', 'e', 
'r', 'i', 'f', 'y', '_', 'c', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', '_', 'h', 'a', 's', 'h', '\030', '\002', ' ', '\003', 
'(', '\t', 'B', '\016', '\372', 'B', '\013', '\222', '\001', '\010', '\"', '\006', 'r', '\004', '\020', '@', '(', '_', 'R', '\025', 'v', 'e', 'r', 'i', 'f', 
'y', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'H', 'a', 's', 'h', '\022', '\202', '\001', '\n', '\035', 'm', 'a', 't', 'c', 
'h', '_', 't', 'y', 'p', 'e', 'd', '_', 's', 'u', 'b', 'j', 'e', 'c', 't', '_', 'a', 'l', 't', '_', 'n', 'a', 'm', 'e', 's', 
'\030', '\017', ' ', '\003', '(', '\013', '2', '@', '.', 'e', 'n', 'v', 'o', 'y', '.', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', 
'.', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', '_', 's', 'o', 'c', 'k', 'e', 't', 's', '.', 't', 'l', 's', '.', 'v', '3', 
'.', 'S', 'u', 'b', 'j', 'e', 'c', 't', 'A', 'l', 't', 'N', 'a', 'm', 'e', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'R', '\031', 'm', 
'a', 't', 'c', 'h', 'T', 'y', 'p', 'e', 'd', 'S', 'u', 'b', 'j', 'e', 'c', 't', 'A', 'l', 't', 'N', 'a', 'm', 'e', 's', '\022', 
'h', '\n', '\027', 'm', 'a', 't', 'c', 'h', '_', 's', 'u', 'b', 'j', 'e', 'c', 't', '_', 'a', 'l', 't', '_', 'n', 'a', 'm', 'e', 
's', '\030', '\t', ' ', '\003', '(', '\013', '2', '$', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 
'h', 'e', 'r', '.', 'v', '3', '.', 'S', 't', 'r', 'i', 'n', 'g', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'B', '\013', '\030', '\001', '\222', 
'\307', '\206', '\330', '\004', '\003', '3', '.', '0', 'R', '\024', 'm', 'a', 't', 'c', 'h', 'S', 'u', 'b', 'j', 'e', 'c', 't', 'A', 'l', 't', 
'N', 'a', 'm', 'e', 's', '\022', 'k', '\n', '$', 'r', 'e', 'q', 'u', 'i', 'r', 'e', '_', 's', 'i', 'g', 'n', 'e', 'd', '_', 'c', 
'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', '_', 't', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', '\030', '\006', ' ', '\001', '(', 
'\013', '2', '\032', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'B', 'o', 'o', 'l', 'V', 
'a', 'l', 'u', 'e', 'R', '!', 'r', 'e', 'q', 'u', 'i', 'r', 'e', 'S', 'i', 'g', 'n', 'e', 'd', 'C', 'e', 'r', 't', 'i', 'f', 
'i', 'c', 'a', 't', 'e', 'T', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', '\022', '2', '\n', '\003', 'c', 'r', 'l', '\030', '\007', ' ', '\001', 
'(', '\013', '2', ' ', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', 
'.', 'D', 'a', 't', 'a', 'S', 'o', 'u', 'r', 'c', 'e', 'R', '\003', 'c', 'r', 'l', '\022', ':', '\n', '\031', 'a', 'l', 'l', 'o', 'w', 
'_', 'e', 'x', 'p', 'i', 'r', 'e', 'd', '_', 'c', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', '\030', '\010', ' ', '\001', '(', 
'\010', 'R', '\027', 'a', 'l', 'l', 'o', 'w', 'E', 'x', 'p', 'i', 'r', 'e', 'd', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 
'e', '\022', '\242', '\001', '\n', '\030', 't', 'r', 'u', 's', 't', '_', 'c', 'h', 'a', 'i', 'n', '_', 'v', 'e', 'r', 'i', 'f', 'i', 'c', 
'a', 't', 'i', 'o', 'n', '\030', '\n', ' ', '\001', '(', '\016', '2', '^', '.', 'e', 'n', 'v', 'o', 'y', '.', 'e', 'x', 't', 'e', 'n', 
's', 'i', 'o', 'n', 's', '.', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', '_', 's', 'o', 'c', 'k', 'e', 't', 's', '.', 't', 
'l', 's', '.', 'v', '3', '.', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'i', 
'o', 'n', 'C', 'o', 'n', 't', 'e', 'x', 't', '.', 'T', 'r', 'u', 's', 't', 'C', 'h', 'a', 'i', 'n', 'V', 'e', 'r', 'i', 'f', 
'i', 'c', 'a', 't', 'i', 'o', 'n', 'B', '\010', '\372', 'B', '\005', '\202', '\001', '\002', '\020', '\001', 'R', '\026', 't', 'r', 'u', 's', 't', 'C', 
'h', 'a', 'i', 'n', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 't', 'i', 'o', 'n', '\022', 'b', '\n', '\027', 'c', 'u', 's', 't', 'o', 
'm', '_', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'o', 'r', '_', 'c', 'o', 'n', 'f', 'i', 'g', '\030', '\014', ' ', '\001', '(', '\013', '2', 
'*', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'T', 'y', 
'p', 'e', 'd', 'E', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 'C', 'o', 'n', 'f', 'i', 'g', 'R', '\025', 'c', 'u', 's', 't', 'o', 
'm', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'o', 'r', 'C', 'o', 'n', 'f', 'i', 'g', '\022', '8', '\n', '\031', 'o', 'n', 'l', 'y', '_', 
'v', 'e', 'r', 'i', 'f', 'y', '_', 'l', 'e', 'a', 'f', '_', 'c', 'e', 'r', 't', '_', 'c', 'r', 'l', '\030', '\016', ' ', '\001', '(', 
'\010', 'R', '\025', 'o', 'n', 'l', 'y', 'V', 'e', 'r', 'i', 'f', 'y', 'L', 'e', 'a', 'f', 'C', 'e', 'r', 't', 'C', 'r', 'l', '\022', 
'O', '\n', '\020', 'm', 'a', 'x', '_', 'v', 'e', 'r', 'i', 'f', 'y', '_', 'd', 'e', 'p', 't', 'h', '\030', '\020', ' ', '\001', '(', '\013', 
'2', '\034', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 
'V', 'a', 'l', 'u', 'e', 'B', '\007', '\372', 'B', '\004', '*', '\002', '\030', 'd', 'R', '\016', 'm', 'a', 'x', 'V', 'e', 'r', 'i', 'f', 'y', 
'D', 'e', 'p', 't', 'h', '\"', 'F', '\n', '\026', 'T', 'r', 'u', 's', 't', 'C', 'h', 'a', 'i', 'n', 'V', 'e', 'r', 'i', 'f', 'i', 
'c', 'a', 't', 'i', 'o', 'n', '\022', '\026', '\n', '\022', 'V', 'E', 'R', 'I', 'F', 'Y', '_', 'T', 'R', 'U', 'S', 'T', '_', 'C', 'H', 
'A', 'I', 'N', '\020', '\000', '\022', '\024', '\n', '\020', 'A', 'C', 'C', 'E', 'P', 'T', '_', 'U', 'N', 'T', 'R', 'U', 'S', 'T', 'E', 'D', 
'\020', '\001', ':', '5', '\232', '\305', '\210', '\036', '0', '\n', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'a', 
'u', 't', 'h', '.', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'i', 'o', 'n', 
'C', 'o', 'n', 't', 'e', 'x', 't', 'J', '\004', '\010', '\004', '\020', '\005', 'J', '\004', '\010', '\005', '\020', '\006', 'R', '\027', 'v', 'e', 'r', 'i', 
'f', 'y', '_', 's', 'u', 'b', 'j', 'e', 'c', 't', '_', 'a', 'l', 't', '_', 'n', 'a', 'm', 'e', 'B', '\250', '\001', '\n', '7', 'i', 
'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'e', 'x', 't', 'e', 'n', 's', 
'i', 'o', 'n', 's', '.', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', '_', 's', 'o', 'c', 'k', 'e', 't', 's', '.', 't', 'l', 
's', '.', 'v', '3', 'B', '\013', 'C', 'o', 'm', 'm', 'o', 'n', 'P', 'r', 'o', 't', 'o', 'P', '\001', 'Z', 'V', 'g', 'i', 't', 'h', 
'u', 'b', '.', 'c', 'o', 'm', '/', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '/', 'g', 'o', '-', 'c', 'o', 'n', 't', 
'r', 'o', 'l', '-', 'p', 'l', 'a', 'n', 'e', '/', 'e', 'n', 'v', 'o', 'y', '/', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 
's', '/', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', '_', 's', 'o', 'c', 'k', 'e', 't', 's', '/', 't', 'l', 's', '/', 'v', 
'3', ';', 't', 'l', 's', 'v', '3', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static _upb_DefPool_Init *deps[12] = {
  &envoy_config_core_v3_base_proto_upbdefinit,
  &envoy_config_core_v3_extension_proto_upbdefinit,
  &envoy_type_matcher_v3_string_proto_upbdefinit,
  &google_protobuf_any_proto_upbdefinit,
  &google_protobuf_wrappers_proto_upbdefinit,
  &envoy_annotations_deprecation_proto_upbdefinit,
  &udpa_annotations_migrate_proto_upbdefinit,
  &udpa_annotations_sensitive_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

_upb_DefPool_Init envoy_extensions_transport_sockets_tls_v3_common_proto_upbdefinit = {
  deps,
  &envoy_extensions_transport_sockets_tls_v3_common_proto_upb_file_layout,
  "envoy/extensions/transport_sockets/tls/v3/common.proto",
  UPB_STRINGVIEW_INIT(descriptor, 4173)
};
