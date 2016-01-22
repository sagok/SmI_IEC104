/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_WriteRequest_H_
#define	_WriteRequest_H_


#include "asn_application.h"

/* Including external dependencies */
#include "VariableAccessSpecification.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Data;

/* WriteRequest */
typedef struct WriteRequest {
	VariableAccessSpecification_t	 variableAccessSpecification;
	struct WriteRequest__listOfData {
		A_SEQUENCE_OF(struct Data) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} listOfData;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WriteRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WriteRequest;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Data.h"

#endif	/* _WriteRequest_H_ */
