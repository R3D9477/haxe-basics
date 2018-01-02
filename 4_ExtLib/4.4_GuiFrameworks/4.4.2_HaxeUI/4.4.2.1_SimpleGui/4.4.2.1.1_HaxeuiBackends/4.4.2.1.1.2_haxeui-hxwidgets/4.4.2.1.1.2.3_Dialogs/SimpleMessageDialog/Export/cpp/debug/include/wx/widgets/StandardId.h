// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_StandardId
#define INCLUDED_wx_widgets_StandardId

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(wx,widgets,StandardId)

#include <wx/defs.h>
namespace wx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES StandardId_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StandardId_obj OBJ_;
		StandardId_obj();

	public:
		enum { _hx_ClassId = 0x43bf8186 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.StandardId")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.StandardId"); }

		hx::ObjectPtr< StandardId_obj > __new() {
			hx::ObjectPtr< StandardId_obj > __this = new StandardId_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< StandardId_obj > __alloc(hx::Ctx *_hx_ctx) {
			StandardId_obj *__this = (StandardId_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StandardId_obj), false, "wx.widgets.StandardId"));
			*(void **)__this = StandardId_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StandardId_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StandardId","\x98","\x84","\x13","\x99"); }

		static void __boot();
		static int OK;
};

} // end namespace wx
} // end namespace widgets

#endif /* INCLUDED_wx_widgets_StandardId */ 
