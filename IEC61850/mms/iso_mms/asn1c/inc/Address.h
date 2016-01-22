/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_Address_H_
#define	_Address_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Unsigned32.h"
#include "VisibleString.h"
#include "OCTET_STRING.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Address_PR {
	Address_PR_NOTHING,	/* No components present */
	Address_PR_numericAddress,
	Address_PR_symbolicAddress,
	Address_PR_unconstrainedAddress
} Address_PR;

/* Address */
typedef struct Address {
	Address_PR present;
	union Address_u {
		Unsigned32_t	 numericAddress;
		VisibleString_t	 symbolicAddress;
		OCTET_STRING_t	 unconstrainedAddress;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Address_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Address;

#ifdef __cplusplus
}
#endif

#endif	/* _Address_H_ */
