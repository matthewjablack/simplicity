#include "checkSigHashAllTx1.h"

/* A length-prefixed encoding of the following Simplicity program:
 *       (Simplicity.Bitcoin.Programs.CheckSigHashAll.Lib.pkwCheckSigHashAll
 *         (XOnlyPubKey 0x00000000000000000000003b78ce563f89a0ed9414f5aa28ad0d96d6795f9c63)
 *         (Sig 0x00000000000000000000003b78ce563f89a0ed9414f5aa28ad0d96d6795f9c63
 *              0x7d0fbcf693ee43460b86b587111e5087d9f7386c1c49284fb2f8e5c096a339b8
 *       ) )
 * with jets.
 */
const unsigned char bitcoinCheckSigHashAllTx1[] = {
  0xe7, 0x11, 0x24, 0x08, 0x10, 0x20, 0x40, 0x81, 0x05, 0xd0, 0x20, 0x5a, 0x02, 0xba, 0x84, 0xa2, 0xa1, 0x6a, 0x0b, 0x50,
  0x5b, 0xf4, 0x09, 0xa0, 0x59, 0xf0, 0x01, 0x40, 0xb5, 0xf0, 0x21, 0x6c, 0xd4, 0x28, 0x16, 0x01, 0x68, 0xd0, 0x2d, 0x3b,
  0x85, 0x02, 0xe0, 0x5c, 0x08, 0x5c, 0x08, 0x2a, 0x16, 0x61, 0x70, 0x00, 0xb8, 0x48, 0x5c, 0x1b, 0x80, 0x8b, 0x80, 0x05,
  0xc2, 0x38, 0x40, 0x9c, 0x42, 0x2a, 0x17, 0x0d, 0xe0, 0xc2, 0xe0, 0x41, 0x70, 0x8e, 0x26, 0x16, 0x80, 0xa8, 0x59, 0x05,
  0xc5, 0x5c, 0x30, 0x4c, 0x45, 0xc0, 0xf8, 0x30, 0xa0, 0x5b, 0x76, 0x8b, 0x8b, 0xf8, 0x98, 0x4e, 0x20, 0x15, 0x0b, 0x10,
  0xb5, 0x05, 0xc0, 0xf8, 0x00, 0xb8, 0xd3, 0x80, 0x8a, 0x05, 0xc2, 0x38, 0x80, 0x5c, 0x13, 0x88, 0x45, 0x02, 0xc0, 0x2e,
  0x2c, 0xe1, 0x82, 0xe2, 0x6e, 0x23, 0x14, 0x0b, 0x87, 0xf1, 0x60, 0xb8, 0xa3, 0x8d, 0xc5, 0x02, 0xc0, 0x2d, 0x01, 0x70,
  0x00, 0xb8, 0x98, 0xe2, 0x84, 0x18, 0x98, 0x62, 0x14, 0x4d, 0x42, 0x08, 0xa0, 0x58, 0x20, 0x0b, 0x90, 0x7c, 0x92, 0x13,
  0x92, 0x42, 0x72, 0x48, 0x58, 0x04, 0xe4, 0x90, 0xb3, 0x0b, 0x92, 0x9c, 0x94, 0x17, 0x26, 0x78, 0xd0, 0x4e, 0x39, 0x17,
  0x26, 0x42, 0xe4, 0xc8, 0x5c, 0x99, 0x0b, 0x20, 0xb4, 0x05, 0xc1, 0x49, 0x28, 0x90, 0x50, 0x29, 0x05, 0x02, 0xc7, 0x11,
  0x50, 0xa8, 0x57, 0x21, 0x61, 0x80, 0xa0, 0x58, 0x05, 0xab, 0x31, 0x6a, 0xd6, 0x28, 0x16, 0xed, 0xe2, 0x6b, 0x10, 0x2c,
  0x02, 0xd0, 0x17, 0x01, 0xe0, 0x22, 0xe0, 0x19, 0x0a, 0x05, 0xc1, 0x74, 0x0b, 0x81, 0x05, 0x42, 0xd5, 0xc1, 0x05, 0xc0,
  0xb5, 0x8a, 0x05, 0x80, 0x5a, 0xc2, 0xe1, 0x3c, 0x0c, 0x5c, 0x23, 0x48, 0xa0, 0x5c, 0x0f, 0x88, 0x05, 0xc1, 0x38, 0x80,
  0x50, 0x2e, 0x20, 0xe2, 0x21, 0x70, 0x60, 0xa8, 0x59, 0x85, 0xc1, 0x33, 0x17, 0x0e, 0xcc, 0x50, 0x2e, 0x29, 0xe1, 0xa2,
  0x71, 0x28, 0xb8, 0x68, 0x58, 0x05, 0xa0, 0x2e, 0x06, 0x17, 0x11, 0xf1, 0x18, 0x9c, 0x38, 0x5c, 0x57, 0xc5, 0xc2, 0x81,
  0x71, 0x37, 0x14, 0x89, 0xc5, 0x22, 0xa1, 0x71, 0x6f, 0x18, 0x8b, 0x8d, 0x38, 0x98, 0x50, 0x2e, 0x27, 0xe3, 0x61, 0x70,
  0xbe, 0x28, 0x14, 0x0b, 0x00, 0xb4, 0x05, 0xc5, 0x3c, 0x66, 0x2e, 0x3e, 0xe3, 0x21, 0x71, 0xff, 0x1b, 0x8a, 0x05, 0x80,
  0x5c, 0x63, 0xc4, 0x62, 0xe2, 0x2e, 0x33, 0x14, 0x0b, 0x89, 0xb9, 0x0a, 0x26, 0xe1, 0x50, 0xb3, 0x0b, 0x68, 0x5c, 0x34,
  0x83, 0x05, 0x5c, 0x08, 0x3e, 0x22, 0x80, 0x30, 0x07, 0x26, 0x40, 0xe5, 0x90, 0x5c, 0xb4, 0x1f, 0x58, 0xa3, 0xc1, 0x00,
  0xe5, 0xdb, 0xd2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0x78, 0xce, 0x56, 0x3f,
  0x89, 0xa0, 0xed, 0x94, 0x14, 0xf5, 0xaa, 0x28, 0xad, 0x0d, 0x96, 0xd6, 0x79, 0x5f, 0x9c, 0x63, 0x4b, 0x95, 0x69, 0x33,
  0x0c, 0x56, 0x5f, 0x18, 0x1e, 0x63, 0xdd, 0xf2, 0x88, 0x61, 0x4c, 0xc6, 0xfa, 0x0c, 0xe8, 0xae, 0x33, 0x28, 0x76, 0xc9,
  0x26, 0xa1, 0xda, 0xb3, 0xaf, 0xd0, 0x16, 0x30
};

const size_t sizeof_bitcoinCheckSigHashAllTx1 = sizeof(bitcoinCheckSigHashAllTx1);

/* The commitment Merkle root of the above elementsCheckSigHashAllTx1 Simplicity expression. */
const uint32_t bitcoinCheckSigHashAllTx1_cmr[] = {
  0x81a638e6u, 0x4446b322u, 0xbc6e1414u, 0x2be1e9ceu, 0x668dd394u, 0x656ebf91u, 0x1dd79cd4u, 0x23878d7au
};

/* The witness Merkle root of the above elementsCheckSigHashAllTx1 Simplicity expression. */
const uint32_t bitcoinCheckSigHashAllTx1_wmr[] = {
  0x8e32aeecu, 0xc99fa4c8u, 0x378845bcu, 0x54ec3e03u, 0xfa37559du, 0x32ab527au, 0x9fbf64afu, 0x3ab04b8au
};