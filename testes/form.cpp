#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    
    // NomeDoProjeto é o namespace do projeto
    NomeDoProjeto::MyForm form;
    Application::Run(%form);
}
