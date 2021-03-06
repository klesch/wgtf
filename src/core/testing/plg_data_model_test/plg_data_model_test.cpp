#include "core_generic_plugin/generic_plugin.hpp"
#include "custom_model_interface_test.hpp"

WGT_INIT_QRC_RESOURCE

namespace wgt
{
/**
* A plugin which creates a panel that tests reflection with undo/redo
*
* @ingroup plugins
* @image html plg_data_model_test.png
* @note Requires Plugins:
*       - @ref coreplugins
*/
class TestDataModelPlugin : public PluginMain
{
public:
	//==========================================================================
	void Initialise(IComponentContext& contextManager) override
	{
		customModelInterfaceTest.initialise();
	}

	//==========================================================================
	bool Finalise(IComponentContext& contextManager) override
	{
		customModelInterfaceTest.fini();
		return true;
	}

private:
	CustomModelInterfaceTest customModelInterfaceTest;
};

PLG_CALLBACK_FUNC(TestDataModelPlugin)
} // end namespace wgt
