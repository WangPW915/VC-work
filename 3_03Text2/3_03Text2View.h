
// 3_03Text2View.h : CMy3_03Text2View 类的接口
//

#pragma once


class CMy3_03Text2View : public CView
{
protected: // 仅从序列化创建
	CMy3_03Text2View();
	DECLARE_DYNCREATE(CMy3_03Text2View)

// 特性
public:
	CMy3_03Text2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CMy3_03Text2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 3_03Text2View.cpp 中的调试版本
inline CMy3_03Text2Doc* CMy3_03Text2View::GetDocument() const
   { return reinterpret_cast<CMy3_03Text2Doc*>(m_pDocument); }
#endif

