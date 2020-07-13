/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_SecurityAlgorithmConfig_H_
#define	_SecurityAlgorithmConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CipheringAlgorithm.h"
#include "IntegrityProtAlgorithm.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SecurityAlgorithmConfig */
typedef struct SecurityAlgorithmConfig {
	CipheringAlgorithm_t	 cipheringAlgorithm;
	IntegrityProtAlgorithm_t	*integrityProtAlgorithm;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityAlgorithmConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityAlgorithmConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_SecurityAlgorithmConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_SecurityAlgorithmConfig_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SecurityAlgorithmConfig_H_ */
#include <asn_internal.h>