struct Hook_TESConditionItem
{
    static bool IsTrue(RE::TESConditionItem* a_this, RE::ConditionCheckParams* a_params)
    {
        auto tls = RE::TLS::GetSingleton();
        tls->consoleMode = false;

        return _IsTrue(a_this, a_params);
    }

    static inline REL::Relocation<decltype(IsTrue)> _IsTrue;

    static void Install()
    {
        REL::Relocation target1{ REL::ID(2207303) };
        _IsTrue = target1.write_call<5, 0xED>(IsTrue);
        target1.write_call<5, 0x169>(IsTrue);
        REL::Relocation target2{ REL::ID(2211989) };
        target2.write_call<5, 0xF0>(IsTrue);
        target2.write_call<5, 0x129>(IsTrue);
        REL::Relocation target3{ REL::ID(2211990) };
        target3.write_call<5, 0xDB>(IsTrue);
        target3.write_call<5, 0x112>(IsTrue);
        REL::Relocation target4{ REL::ID(2211991) };
        target4.write_call<5, 0xF3>(IsTrue);
        target4.write_call<5, 0x13F>(IsTrue);
        REL::Relocation target5{ REL::ID(2211996) };
        target5.write_call<5, 0xCB>(IsTrue);
        target5.write_call<5, 0x102>(IsTrue);
        REL::Relocation target6{ REL::ID(2212008) };
        target6.write_call<5, 0x21>(IsTrue);
    }
};

F4SEPluginLoad(const F4SE::LoadInterface* a_f4se)
{
	F4SE::Init(a_f4se);
	F4SE::AllocTrampoline(14);

	Hook_TESConditionItem::Install();

	return true;
}
