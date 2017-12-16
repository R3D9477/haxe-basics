// GeneratedByHaxe
#ifndef INCLUDED_hscript_CType
#define INCLUDED_hscript_CType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscript,CType)
namespace hscript{


class CType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CType_obj OBJ_;

	public:
		CType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("hscript.CType","\x62","\x7a","\x53","\xe9"); }
		::String __ToString() const { return HX_HCSTRING("CType.","\xf1","\x0c","\xe2","\x77") + _hx_tag; }

		static ::hscript::CType CTAnon(::Array< ::Dynamic> fields);
		static ::Dynamic CTAnon_dyn();
		static ::hscript::CType CTFun(::Array< ::Dynamic> args, ::hscript::CType ret);
		static ::Dynamic CTFun_dyn();
		static ::hscript::CType CTParent( ::hscript::CType t);
		static ::Dynamic CTParent_dyn();
		static ::hscript::CType CTPath(::Array< ::String > path,::Array< ::Dynamic> params);
		static ::Dynamic CTPath_dyn();
};

} // end namespace hscript

#endif /* INCLUDED_hscript_CType */ 
