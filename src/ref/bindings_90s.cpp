#include <pybind11/pybind11.h>

extern "C" int pqcrystals_kyber512_90s_ref_keypair(uint8_t *pk, uint8_t *sk);

extern "C" int pqcrystals_kyber512_90s_ref_enc(uint8_t *ct, uint8_t *ss, const uint8_t *pk);

extern "C" int pqcrystals_kyber512_90s_ref_dec(uint8_t *ss, const uint8_t *ct, const uint8_t *sk);


PYBIND11_MODULE(pykyber_90s, m) {
  m.doc() = R"doc(
        Python module
        -----------------------
        .. currentmodule:: pykyber
        .. autosummary::
           :toctree: _generate

           add
           subtract
    )doc";

  m.def("pqcrystals_kyber512_90s_ref_keypair", &pqcrystals_kyber512_90s_ref_keypair, R"doc(
        512 bit version of Kyber

        Some other information about this function.
    )doc");

  m.def("pqcrystals_kyber512_90s_ref_enc", &pqcrystals_kyber512_90s_ref_enc, R"doc(
        512 bit version of Kyber

        Encryptor
    )doc");

  m.def("pqcrystals_kyber512_90s_ref_dec", &pqcrystals_kyber512_90s_ref_dec, R"doc(
        512 bit version of Kyber

        Decyptor
    )doc");}
