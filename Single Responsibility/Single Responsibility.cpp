public class Invoice
{
    public int InvoiceNo {  get; set; }
    public DateOnly IssuedDate { get; set; }
    public string? Customer { get; set; }
    public decimal Amount { get; set; }
    public string? Description { get; set;}

    public void Save()
    {
        Console.WriteLine($"Saved the invoice #{InvoiceNo}");
    }

}

class Program
{
    public static void Main(string[] args)
    {
        // create a new invoice
        var invoice = new Invoice
        {
            InvoiceNo = 1,
            Customer = "John Doe",
            IssuedDate = new DateOnly(2023, 4, 1),
            Description = "Website Design",
            Amount = 1000
        };

        invoice.Save();

    }
}
public class Invoice
{
    public int InvoiceNo {  get; set; }
    public DateOnly IssuedDate { get; set; }
    public string? Customer { get; set; }
    public decimal Amount { get; set; }
    public string? Description { get; set;}

    public void Save()
    {
        Console.WriteLine($"Saved the invoice #{InvoiceNo}");
    }

}
class Program
{
    public static void Main(string[] args)
    {
        // create a new invoice
        var invoice = new Invoice
        {
            InvoiceNo = 1,
            Customer = "John Doe",
            IssuedDate = new DateOnly(2023, 4, 1),
            Description = "Website Design",
            Amount = 1000
        };

        invoice.Save();

    }
}
class InvoiceRepository
{
    public void Save(Invoice invoice)
    {
        Console.WriteLine($"Saved the invoice #{invoice.InvoiceNo}");
    }
}
public class Invoice
{
    public int InvoiceNo { get;set; }
    public DateOnly IssuedDate { get; set; }
    public string? Customer { get; set;}
    public decimal Amount { get; set; }
    public string? Description { get; set;}
}

class InvoiceRepository
{
    public void Save(Invoice invoice)
    {
        Console.WriteLine($"Saved the invoice #{invoice.InvoiceNo}");
    }
}

class Program
{
    public static void Main(string[] args)
    {
        // create a new invoice
        var invoice = new Invoice
        {
            InvoiceNo = 1,
            Customer = "John Doe",
            IssuedDate = new DateOnly(2023, 4, 1),
            Description = "Website Design",
            Amount = 1000
        };

        // save the invoice to a storage
        var invoiceRepository = new InvoiceRepository();
        invoiceRepository.Save(invoice);
    }
}
