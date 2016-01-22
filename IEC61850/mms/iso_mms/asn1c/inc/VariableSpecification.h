/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_VariableSpecification_H_
#define	_VariableSpecification_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ObjectName.h"
#include "Address.h"
#include "NULL.h"
#include "TypeSpecification.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VariableSpecification_PR {
	VariableSpecification_PR_NOTHING,	/* No components present */
	VariableSpecification_PR_name,
	VariableSpecification_PR_address,
	VariableSpecification_PR_variableDescription,
	VariableSpecification_PR_scatteredAccessDescription,
	VariableSpecification_PR_invalidated
} VariableSpecification_PR;

/* Forward declarations */
struct ScatteredAccessDescription;

/* VariableSpecification */
typedef struct VariableSpecification {
	VariableSpecification_PR present;
	union VariableSpecification_u {
		ObjectName_t	 name;
		Address_t	 address;
		struct VariableSpecification__variableDescription {
			Address_t	 address;
			TypeSpecification_t	 typeSpecification;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} variableDescription;
		struct ScatteredAccessDescription	*scatteredAccessDescription;
		NULL_t	 invalidated;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VariableSpecification_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VariableSpecification;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ScatteredAccessDescription.h"

#endif	/* _VariableSpecification_H_ */
