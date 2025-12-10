#include "Ctx.h"

static void AddUserToStruct(
    std::vector<Users_t>& m_VecUsers,
    std::string m_szCity,
    std::string m_szStreet,
    int m_iHomeNumber,
    int m_iHomeApartments,
    int m_iCityIndex)
{
    Users_t m_User;
    m_User.m_szCity = m_szCity;
    m_User.m_szStreet = m_szStreet;
    m_User.m_iHomeNumber = m_iHomeNumber;
    m_User.m_iHomeApartments = m_iHomeApartments;
    m_User.m_iCityIndex = m_iCityIndex;

    m_VecUsers.push_back(m_User);
}

int main()
{
    std::vector<Users_t> m_VecUsers;

    AddUserToStruct(m_VecUsers, "Moscow", "Arbat", 12, 8, 123456);
    AddUserToStruct(m_VecUsers, "Izhevsk", "Pushkin", 59, 143, 953769);

    for (auto& m_CurrentUser : m_VecUsers)
    {
        std::cout << "m_szCity: " << m_CurrentUser.m_szCity << std::endl;
        std::cout << "m_szStreet: " << m_CurrentUser.m_szStreet << std::endl;
        std::cout << "m_iHomeNumber: " << m_CurrentUser.m_iHomeNumber << std::endl;
        std::cout << "m_iHomeApartments: " << m_CurrentUser.m_iHomeApartments << std::endl;
        std::cout << "m_iCityIndex: " << m_CurrentUser.m_iCityIndex << std::endl;

        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}