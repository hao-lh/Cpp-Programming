#include <iostream>

class EquipmentPiece
{
public:
	EquipmentPiece(int ID)
	{
		m_id = ID;
		std::cout << "EquipmentPiece::EquipmentPiece(), id = " << m_id << std::endl;
	}
	~EquipmentPiece()
	{
		std::cout << "EquipmentPiece::~EquipmentPiece(), id = " << m_id << std::endl;
	}
	EquipmentPiece& operator=(EquipmentPiece const & rhs)
	{
		this->m_id = rhs.m_id;
		std::cout << "EquipmentPiece::operator=(), id = " << m_id << std::endl;
		return *this;
	}

private:
	int m_id;
};	


int main()
{
	int const sz = 10;
	int ids[sz];
	for (int i = 0; i < sz; ++i)
		ids[i] = i;

	// // int ids[] = {0,1,2,3,4,5,6,7,8,9};
	// EquipmentPiece ep[] = {
	// 	EquipmentPiece(ids[0]),
	// 	EquipmentPiece(ids[1]),
	// 	EquipmentPiece(ids[2]),
	// 	EquipmentPiece(ids[3]),
	// 	EquipmentPiece(ids[4]),
	// 	EquipmentPiece(ids[5]),
	// 	EquipmentPiece(ids[6]),
	// 	EquipmentPiece(ids[7]),
	// 	EquipmentPiece(ids[8]),
	// 	EquipmentPiece(ids[9])
	// };

	void *rawMemory = operator new[](sz * sizeof(EquipmentPiece));
	EquipmentPiece *pEP = static_cast<EquipmentPiece*>(rawMemory);
	for (int i = 0; i < sz; ++i)
		new (pEP+i) EquipmentPiece(ids[i]);

	// delete [] pEP;
	for (int i = 0; i < sz; ++i)
		pEP[i].~EquipmentPiece();

	operator delete[] (rawMemory);

}