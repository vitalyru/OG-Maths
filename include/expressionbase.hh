/**
 * Copyright (C) 2013 - present by OpenGamma Inc. and the OpenGamma group of companies
 *
 * Please see distribution for license.
 */

#ifndef _EXPRESSIONBASE_HH
#define _EXPRESSIONBASE_HH

#include <memory>
#include <vector>
#include "numeric.hh"
#include "visitor.hh"

/**
 * The namespace for the DAG library
 */
namespace librdag
{

/**
 * Container for expression arguments
 */

typedef std::vector<OGNumeric::Ptr> ArgContainer;
typedef std::vector<OGNumeric::Ptr> RegContainer;

/**
 *  Expr type
 */
class OGExpr: public OGNumeric
{
  public:
    typedef std::shared_ptr<const OGExpr> Ptr;
    virtual ~OGExpr();
    const ArgContainer& getArgs() const;
    RegContainer& getRegs() const;
    size_t getNArgs() const;
    virtual OGExpr::Ptr asOGExpr() const override;
    virtual void debug_print() const override;
    virtual void accept(Visitor &v) const override;
  protected:
    OGExpr();
    ArgContainer _args;
  private:
    mutable RegContainer _regs;
};

/**
 * Things that extend OGExpr
 */

class OGUnaryExpr: public OGExpr
{
  protected:
    OGUnaryExpr(const OGNumeric::Ptr& arg);
};

class OGBinaryExpr : public OGExpr
{
  protected:
    OGBinaryExpr(const OGNumeric::Ptr& arg0, const OGNumeric::Ptr& arg1);
};

/**
 * Non-autogenerated nodes
 */

class COPY: public OGUnaryExpr
{
  public:
    typedef std::shared_ptr<const COPY> Ptr;
    static COPY::Ptr create(const OGNumeric::Ptr& arg);
    virtual OGNumeric::Ptr copy() const override;
    virtual COPY::Ptr asCOPY() const override;
    virtual void debug_print() const override;
    virtual ExprType_t getType() const override;
  private:
    COPY(const OGNumeric::Ptr& arg);
};

class SELECTRESULT: public OGExpr
{
  public:
    typedef std::shared_ptr<const SELECTRESULT> Ptr;
    static SELECTRESULT::Ptr create(const OGNumeric::Ptr& arg0, const OGNumeric::Ptr& arg1);
    virtual OGNumeric::Ptr copy() const override;
    virtual SELECTRESULT::Ptr asSELECTRESULT() const override;
    virtual void debug_print() const override;
    virtual ExprType_t getType() const override;
  private:
    SELECTRESULT(const OGNumeric::Ptr& arg0, const OGNumeric::Ptr& arg1);
};

class NORM2: public OGUnaryExpr
{
  public:
    typedef std::shared_ptr<const NORM2> Ptr;
    static NORM2::Ptr create(const OGNumeric::Ptr& arg);
    virtual OGNumeric::Ptr copy() const override;
    virtual NORM2::Ptr asNORM2() const override;
    virtual void debug_print() const override;
    virtual ExprType_t getType() const override;
  private:
    NORM2(const OGNumeric::Ptr& arg);
};


class PINV: public OGUnaryExpr
{
  public:
    typedef std::shared_ptr<const PINV> Ptr;
    static PINV::Ptr create(const OGNumeric::Ptr& arg);
    virtual OGNumeric::Ptr copy() const override;
    virtual PINV::Ptr asPINV() const override;
    virtual void debug_print() const override;
    virtual ExprType_t getType() const override;
  private:
    PINV(const OGNumeric::Ptr& arg);
};

class INV: public OGUnaryExpr
{
  public:
    typedef std::shared_ptr<const INV> Ptr;
    static INV::Ptr create(const OGNumeric::Ptr& arg);
    virtual OGNumeric::Ptr copy() const override;
    virtual INV::Ptr asINV() const override;
    virtual void debug_print() const override;
    virtual ExprType_t getType() const override;
  private:
    INV(const OGNumeric::Ptr& arg);
};


class TRANSPOSE: public OGUnaryExpr
{
  public:
    typedef std::shared_ptr<const TRANSPOSE> Ptr;
    static TRANSPOSE::Ptr create(const OGNumeric::Ptr& arg);
    virtual OGNumeric::Ptr copy() const override;
    virtual TRANSPOSE::Ptr asTRANSPOSE() const override;
    virtual void debug_print() const override;
    virtual ExprType_t getType() const override;
  private:
    TRANSPOSE(const OGNumeric::Ptr& arg);
};

class CTRANSPOSE: public OGUnaryExpr
{
  public:
    typedef std::shared_ptr<const CTRANSPOSE> Ptr;
    static CTRANSPOSE::Ptr create(const OGNumeric::Ptr& arg);
    virtual OGNumeric::Ptr copy() const override;
    virtual CTRANSPOSE::Ptr asCTRANSPOSE() const override;
    virtual void debug_print() const override;
    virtual ExprType_t getType() const override;
  private:
    CTRANSPOSE(const OGNumeric::Ptr& arg);
};


class SVD: public OGUnaryExpr
{
  public:
    typedef std::shared_ptr<const SVD> Ptr;
    static SVD::Ptr create(const OGNumeric::Ptr& arg);
    virtual OGNumeric::Ptr copy() const override;
    virtual SVD::Ptr asSVD() const override;
    virtual void debug_print() const override;
    virtual ExprType_t getType() const override;
  private:
    SVD(const OGNumeric::Ptr& arg);
};

class MTIMES: public OGBinaryExpr
{
  public:
    typedef std::shared_ptr<const MTIMES> Ptr;
    static MTIMES::Ptr create(const OGNumeric::Ptr& arg0, const OGNumeric::Ptr& arg1);
    virtual OGNumeric::Ptr copy() const override;
    virtual MTIMES::Ptr asMTIMES() const override;
    virtual void debug_print() const override;
    virtual ExprType_t getType() const override;
  private:
    MTIMES(const OGNumeric::Ptr& arg0, const OGNumeric::Ptr& arg1);
};

class LU: public OGUnaryExpr
{
  public:
    typedef std::shared_ptr<const LU> Ptr;
    static LU::Ptr create(const OGNumeric::Ptr& arg);
    virtual OGNumeric::Ptr copy() const override;
    virtual LU::Ptr asLU() const override;
    virtual void debug_print() const override;
    virtual ExprType_t getType() const override;
  private:
    LU(const OGNumeric::Ptr& arg);
};

} // namespace librdag

#endif // _EXPRESSIONBASE_HH
