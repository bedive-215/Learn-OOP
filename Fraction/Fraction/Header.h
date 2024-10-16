#pragma once

class PhanSo {
private:
    int tuSo;
    int mauSo;

public:
	PhanSo();
	
    int GetTuSo() const;
    int GetMauSo() const;
    PhanSo RutGon();
    void InPhanSo() const;
    void NgoaiLe(int mauSo);
    void NhapPhanSo();
    int GCD(int a, int b);
    PhanSo Cong(PhanSo& psa, PhanSo& psb);
};

