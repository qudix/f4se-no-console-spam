struct Hook_TESConditionItem
{
    static bool IsTrue(RE::TESConditionItem* a_this, RE::ConditionCheckParams& a_params)
    {
        auto tls = RE::TLS::GetSingleton();
        tls->consoleMode = false;

        return _IsTrue01(a_this, a_params);
    }

    static inline REL::Hook _IsTrue01{ "IsTrue01", REL::ID(2207303), 0x0ED, IsTrue };
    static inline REL::Hook _IsTrue02{ "IsTrue02", REL::ID(2207303), 0x169, IsTrue };
    static inline REL::Hook _IsTrue03{ "IsTrue03", REL::ID(2211989), 0x0F0, IsTrue };
    static inline REL::Hook _IsTrue04{ "IsTrue04", REL::ID(2211989), 0x129, IsTrue };
    static inline REL::Hook _IsTrue05{ "IsTrue05", REL::ID(2211990), 0x0DB, IsTrue };
    static inline REL::Hook _IsTrue06{ "IsTrue06", REL::ID(2211990), 0x112, IsTrue };
    static inline REL::Hook _IsTrue07{ "IsTrue07", REL::ID(2211991), 0x0F3, IsTrue };
    static inline REL::Hook _IsTrue08{ "IsTrue08", REL::ID(2211991), 0x13F, IsTrue };
    static inline REL::Hook _IsTrue09{ "IsTrue09", REL::ID(2211996), 0x0CB, IsTrue };
    static inline REL::Hook _IsTrue10{ "IsTrue10", REL::ID(2211996), 0x102, IsTrue };
    static inline REL::Hook _IsTrue11{ "IsTrue11", REL::ID(2212008), 0x021, IsTrue };
};

F4SE_PLUGIN_LOAD(const F4SE::LoadInterface* a_f4se)
{
    F4SE::Init(a_f4se, { .trampoline = true, .trampolineSize = 14 });

	return true;
}
