/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#include "asn_internal.h"

#include "VariableSpecification.h"

static asn_TYPE_member_t asn_MBR_variableDescription_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VariableSpecification__variableDescription, address),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Address,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"address"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VariableSpecification__variableDescription, typeSpecification),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_TypeSpecification,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"typeSpecification"
		},
};
static ber_tlv_tag_t asn_DEF_variableDescription_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_variableDescription_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 1 }, /* numericAddress at 792 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, -1, 0 }, /* typeName at 495 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 1 }, /* symbolicAddress at 793 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, -1, 0 }, /* array at 498 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 0, 0, 1 }, /* unconstrainedAddress at 794 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, -1, 0 }, /* structure at 504 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 1, 0, 0 }, /* boolean at 509 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 0 }, /* bitstring at 510 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 1, 0, 0 }, /* integer at 511 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 1, 0, 0 }, /* unsigned at 512 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 1, 0, 0 }, /* floatingpoint at 514 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 1, 0, 0 }, /* octetstring at 521 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 1, 0, 0 }, /* visiblestring at 522 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 1, 0, 0 }, /* generalizedtime at 523 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 1, 0, 0 }, /* binarytime at 524 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 1, 0, 0 }, /* bcd at 525 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 1, 0, 0 }, /* objId at 526 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 1, 0, 0 }, /* mMSString at 527 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 1, 0, 0 } /* utctime at 528 */
};
static asn_SEQUENCE_specifics_t asn_SPC_variableDescription_specs_4 = {
	sizeof(struct VariableSpecification__variableDescription),
	offsetof(struct VariableSpecification__variableDescription, _asn_ctx),
	asn_MAP_variableDescription_tag2el_4,
	19,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_variableDescription_4 = {
	"variableDescription",
	"variableDescription",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_variableDescription_tags_4,
	sizeof(asn_DEF_variableDescription_tags_4)
		/sizeof(asn_DEF_variableDescription_tags_4[0]) - 1, /* 1 */
	asn_DEF_variableDescription_tags_4,	/* Same as above */
	sizeof(asn_DEF_variableDescription_tags_4)
		/sizeof(asn_DEF_variableDescription_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_variableDescription_4,
	2,	/* Elements count */
	&asn_SPC_variableDescription_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_VariableSpecification_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VariableSpecification, choice.name),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"name"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VariableSpecification, choice.address),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Address,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"address"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VariableSpecification, choice.variableDescription),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_variableDescription_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"variableDescription"
		},
	{ ATF_POINTER, 0, offsetof(struct VariableSpecification, choice.scatteredAccessDescription),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ScatteredAccessDescription,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"scatteredAccessDescription"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VariableSpecification, choice.invalidated),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"invalidated"
		},
};
static asn_TYPE_tag2member_t asn_MAP_VariableSpecification_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* name at 772 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* address at 773 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* variableDescription at 776 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* scatteredAccessDescription at 779 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* invalidated at 780 */
};
static asn_CHOICE_specifics_t asn_SPC_VariableSpecification_specs_1 = {
	sizeof(struct VariableSpecification),
	offsetof(struct VariableSpecification, _asn_ctx),
	offsetof(struct VariableSpecification, present),
	sizeof(((struct VariableSpecification *)0)->present),
	asn_MAP_VariableSpecification_tag2el_1,
	5,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_VariableSpecification = {
	"VariableSpecification",
	"VariableSpecification",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_VariableSpecification_1,
	5,	/* Elements count */
	&asn_SPC_VariableSpecification_specs_1	/* Additional specs */
};

